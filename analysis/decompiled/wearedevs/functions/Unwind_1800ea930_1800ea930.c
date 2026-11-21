/* Unwind@1800ea930 @ 1800ea930 */

void Unwind_1800ea930(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x4b0);
  puVar2 = *(undefined1 **)(param_2 + 0x4b8);
  uVar3 = *(undefined8 *)(param_2 + 0x4c0);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x600) + 0x2c0);
  if (lVar4 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x600) + 0x2b0),lVar4 << 5,4);
  }
  *puVar2 = 2;
  *(undefined8 *)(param_2 + 0x4a0) = uVar3;
  *(undefined8 *)(param_2 + 0x498) = uVar1;
  return;
}


