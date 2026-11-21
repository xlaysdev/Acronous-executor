/* Unwind@180184390 @ 180184390 */

void Unwind_180184390(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),0x78,8);
  lVar2 = *(longlong *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  plVar1 = (longlong *)(lVar2 + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  *(undefined1 *)(param_2 + 0x67) = 1;
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


