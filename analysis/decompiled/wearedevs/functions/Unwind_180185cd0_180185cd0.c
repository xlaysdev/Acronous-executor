/* Unwind@180185cd0 @ 180185cd0 */

void Unwind_180185cd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x58),0x78,8);
  lVar2 = *(longlong *)(param_2 + 0x60);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x78);
  plVar1 = (longlong *)(lVar2 + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined1 *)(param_2 + 0x85) = 1;
  *(undefined1 *)(param_2 + 0x84) = 0;
  return;
}


