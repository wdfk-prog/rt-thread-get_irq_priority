from building import *
import rtconfig

cwd     = GetCurrentDir()
src     = Glob('src/*.c')
path    = [cwd]

group = DefineGroup('get_irq_priority', src, depend = ['PKG_USING_IRQ_PRIORITY'], CPPPATH = path)

Return('group')
