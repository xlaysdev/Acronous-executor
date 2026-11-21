/* Unwind@180185c10 @ 180185c10 */

void Unwind_180185c10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x78),0x78,8);
  lVar2 = *(longlong *)(param_2 + 0x60);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x70);
  plVar1 = (longlong *)(lVar2 + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined1 *)(param_2 + 0x87) = 0;
  *(undefined1 *)(param_2 + 0x86) = 1;
  return;
}


