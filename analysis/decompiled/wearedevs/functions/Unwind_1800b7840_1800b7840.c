/* Unwind@1800b7840 @ 1800b7840 */

void Unwind_1800b7840(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x2f90);
  if (*(char *)(param_2 + 0x2f63) != '\0') {
    uVar2 = *(undefined8 *)(lVar1 + 0x1e0);
    uVar3 = *(undefined8 *)(lVar1 + 0x1e8);
    *(undefined8 *)(param_2 + 0x2eb8) = *(undefined8 *)(param_2 + 0x2f80);
    FUN_18000aa80(uVar2,uVar3);
  }
  *(undefined1 *)(lVar1 + 0x203) = 2;
  *(undefined8 *)(param_2 + 0x2eb8) = *(undefined8 *)(param_2 + 0x2f80);
  return;
}


