# get_irq_priority

> [中文版 / Chinese Version](./README_zn.md)  
> Current page: English

A lightweight RT-Thread utility package for inspecting Cortex®-M NVIC interrupt priorities from the MSH shell. It can display enabled interrupts, sort them by IRQ number or priority, and update the priority of a selected IRQ at runtime.

- 📘 Online Documentation: <https://wdfk-prog.space/rt-thread-get_irq_priority/>

## 1. Overview

`get_irq_priority` is a debugging-oriented package for RT-Thread. It is designed to:

- list currently **enabled** interrupts;
- show IRQ number, IRQ name, Pending/Active state, and priority;
- print the output sorted by **IRQ number** or **interrupt priority**;
- temporarily change the priority of a selected IRQ from the command line.

The output style is intentionally close to the NVIC view in the Keil debugger, which makes it useful for cross-checking runtime behavior against IDE/debugger expectations.

## 2. Current Support Scope

Based on the uploaded source package, the project currently includes IRQ name tables for the following STM32 families:

- STM32F0
- STM32F1
- STM32F2
- STM32F3
- STM32F4
- STM32F7
- STM32G0
- STM32G4
- STM32H7
- STM32L0
- STM32L4

### Validation examples already present in the repository screenshots

- STM32H750
- STM32F747
- STM32F429
- STM32F103

## 3. How It Works

The package reads NVIC runtime information through CMSIS APIs, including:

- `NVIC_GetEnableIRQ()`
- `NVIC_GetPendingIRQ()`
- `NVIC_GetActive()`
- `NVIC_GetPriority()`
- `NVIC_SetPriority()`

The output covers two categories:

1. **Cortex-M exception types**  
   Such as `NonMaskableInt_IRQn`, `HardFault_IRQn`, `MemoryManagement_IRQn`, `PendSV_IRQn`, and `SysTick_IRQn`.

2. **External interrupts (IRQs)**  
   That is, device interrupts defined by the chip IRQ table.

With the default command, the package first prints exception-type entries and then prints enabled IRQs.

## 4. Repository Layout

```text
get_irq_priority
├── figures/                 # Screenshots used by the documentation
├── inc/                     # IRQ name tables for different STM32 families
│   ├── irq_stm32f0.h
│   ├── irq_stm32f1.h
│   ├── irq_stm32f2.h
│   ├── irq_stm32f3.h
│   ├── irq_stm32f4.h
│   ├── irq_stm32f7.h
│   ├── irq_stm32g0.h
│   ├── irq_stm32g4.h
│   ├── irq_stm32h7.h
│   ├── irq_stm32l0.h
│   └── irq_stm32l4.h
├── src/
│   └── get_irq.c            # Core implementation and MSH entry
├── Kconfig                  # Package configuration entry
├── LICENSE                  # LGPL-2.1
├── SConscript               # RT-Thread build script
└── readme.md                # Original README (recommended to rename to README.md)
```

## 5. Dependencies

Before using this package, make sure the project meets the following requirements:

- **RT-Thread MSH / FinSH** is enabled;
- a console device is correctly registered;
- the target platform is an **STM32 Cortex-M** device;
- CMSIS and chip-specific IRQ definitions are available in the build.

### Kconfig constraint

The current `Kconfig` contains:

```kconfig
depends on SOC_FAMILY_STM32
```

So the online package menu entry is only exposed when the STM32 SoC family condition is satisfied.

## 6. Integration

### Option 1: Manual integration

1. Download or copy the `get_irq_priority` package directory.
2. Place it into a manageable location in your project.
3. Add `src/get_irq.c` to the build.
4. Make sure the expected chip macro is defined, such as `SOC_SERIES_STM32H7` or `SOC_SERIES_STM32F4`.
5. Rebuild the project.

### Option 2: Enable from RT-Thread Env / Studio

The package can be enabled from:

`RT-Thread online packages -> miscellaneous packages -> get_irq_priority`

If `SOC_FAMILY_STM32` is not selected correctly, the package may not appear in the menu. In that case, check the BSP SoC/Kconfig setup first.

## 7. Command Reference

The package registers the following shell command:

```bash
nvic_irq
```

Supported forms are listed below.

### 7.1 Default mode

```bash
nvic_irq
```

Behavior:
- prints Cortex-M exception-type information first;
- then prints the currently **enabled** external interrupts;
- IRQ entries are listed in **ascending IRQ-number order**.

This is the most complete view and is useful for a quick NVIC inspection.

### 7.2 Sort by IRQ number

```bash
nvic_irq num
```

Behavior:
- prints enabled external interrupts only;
- sorts them by **ascending IRQ number**.

### 7.3 Sort by priority

```bash
nvic_irq priority
```

Behavior:
- prints enabled external interrupts only;
- sorts them by **priority from low to high**, following the wording and implementation used by the source code.

> Note  
> In real projects, you should interpret this together with the priority encoding rules of your Cortex-M target, because “smaller numeric value” and “higher logical priority” are not the same statement.

### 7.4 Set IRQ priority

```bash
nvic_irq set <IRQn> <priority>
```

Example:

```bash
nvic_irq set 25 3
```

Behavior:
- directly calls `NVIC_SetPriority(IRQn, priority)` at runtime;
- affects the current runtime state only;
- does not persist the change back into static project configuration.

Parameter constraints:
- `IRQn` must be within the current IRQ table range;
- `priority` must be in the range `0 ~ 15`.

## 8. Output Columns

The command header looks like this:

```text
num IRQ name                       E P A Priotity
--- --------                       - - - --------
```

Column meanings:

- `num`: IRQ number
- `IRQ name`: interrupt name
- `E`: Enable state
- `P`: Pending state
- `A`: Active state
- `Priotity`: priority value reported by the current implementation

> Note  
> The source code and existing README both use the spelling `Priotity`. If the project is maintained further, it would be better to normalize it to `Priority`.

## 9. Sorting Semantics

### Number-based output
Both `nvic_irq` and `nvic_irq num` ultimately print enabled IRQs in IRQ-number order.

### Priority-based output
`nvic_irq priority` caches the priority of enabled IRQs, sorts that buffer, and then prints the results.

This makes it useful for:
- checking which interrupts currently share the same priority;
- reviewing preemption ordering;
- diagnosing timing issues or priority inversions.

## 10. Typical Use Cases

- verifying that critical peripheral IRQs are enabled after BSP initialization;
- checking priority assignments for DMA, UART, TIM, EXTI, and similar interrupts;
- comparing runtime NVIC state against the Keil debugger view;
- verifying whether later driver initialization accidentally overwrote IRQ priorities;
- temporarily adjusting priorities to observe behavior changes.

## 11. Figures and Examples

### 11.1 Principle and UI mapping

CMSIS/NVIC access principle:

![CMSIS principle](./figures/get_irq_priority_0.png)

Comparison with the Keil NVIC view:

![Keil NVIC view](./figures/get_irq_priority_2.png)

### 11.2 Generic command examples

Default output example:

![default command](./figures/get_irq_priority_12.png)

Priority-sorted output example:

![priority command](./figures/get_irq_priority_3.png)

Set-priority example:

![set priority](./figures/get_irq_priority_4.png)

### 11.3 Platform validation screenshots

#### STM32H750
Default query:

![STM32H750 default](./figures/get_irq_priority_1.png)

Priority-sorted query:

![STM32H750 priority](./figures/get_irq_priority_3.png)

Set priority:

![STM32H750 set](./figures/get_irq_priority_4.png)

#### STM32F747
Default query:

![STM32F747 default](./figures/get_irq_priority_10.png)

Priority-sorted query:

![STM32F747 priority](./figures/get_irq_priority_11.png)

#### STM32F429
Default query:

![STM32F429 default](./figures/get_irq_priority_5.png)

Priority-sorted query:

![STM32F429 priority](./figures/get_irq_priority_6.png)

#### STM32F103
Default query:

![STM32F103 default](./figures/get_irq_priority_7.png)

Priority-sorted query:

![STM32F103 priority](./figures/get_irq_priority_8.png)

## 12. Notes and Limitations

- The package depends on console output; make sure a console device is available.
- The online-package entry currently depends on `SOC_FAMILY_STM32`.
- IRQ name tables are maintained per STM32 family in the current implementation.
- The `set` command changes priorities at runtime; it is not a replacement for BSP/driver initialization code.
- If MSH / FinSH is not enabled, the command-line interface will not be available.
- Disabled IRQs are not printed in the IRQ list.

## 13. License

This project is licensed under **LGPL-2.1**. See the `LICENSE` file for details.

## 14. Maintenance

- Maintainer: `wdfk-prog`
- Repository: `https://github.com/wdfk-prog/rt-thread-get_irq_priority`

---

[Switch to Chinese Version](./README_zn.md)
