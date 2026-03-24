# get_irq_priority {#mainpage}

RT-Thread package documentation for inspecting Cortex-M NVIC interrupt priorities and browsing the related C API and data tables.

## Project documents

### English
- [README](../readme.md)

### 中文
- [README_zn](../README_zn.md)

## API entry points

- [File list](files.html)
- [Globals](globals.html)
- [Data structures](annotated.html)

## Source layout

- Core implementation: `src/get_irq.c`
- IRQ name tables: `inc/irq_stm32*.h`
- Runtime package integration: `Kconfig`, `SConscript`

## Notes

- The generated site uses `docs/doxygen-mainpage.md` as the Doxygen main page.
- The current workflow publishes from the `master` branch because that is the repository's public default branch.
