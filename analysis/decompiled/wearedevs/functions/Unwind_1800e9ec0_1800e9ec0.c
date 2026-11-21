/* Unwind@1800e9ec0 @ 1800e9ec0 */

void Unwind_1800e9ec0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x3c0);
  uVar2 = *(undefined8 *)(param_2 + 0x3c8);
  uVar3 = *(undefined8 *)(param_2 + 0x3d0);
  if (*(char *)(*(longlong *)(param_2 + 0x600) + 0xb92) != '\0') {
    FUN_180042ef0(*(longlong *)(param_2 + 0x600) + 0x2e8);
  }
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x600) + 0x368);
  if (lVar4 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x600) + 0x358),lVar4 << 5,4);
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x600) + 0xb92) = 0;
  *(undefined8 *)(param_2 + 0x4c0) = uVar3;
  *(undefined8 *)(param_2 + 0x4b8) = uVar2;
  *(undefined8 *)(param_2 + 0x4b0) = uVar1;
  return;
}


