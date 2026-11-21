/* Unwind@180165dc0 @ 180165dc0 */

void Unwind_180165dc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x280);
  uVar5 = (undefined1)*(undefined4 *)(param_2 + 0x29c);
  for (lVar4 = *(longlong *)(param_2 + 0x290); lVar1 != lVar4; lVar4 = lVar4 + 1) {
    uVar2 = *(undefined8 *)(param_2 + 0x30 + lVar4 * 0x10);
    pcVar3 = *(code **)(*(longlong *)(param_2 + 0x28 + lVar4 * 0x10) + 0x18);
    *(undefined1 *)(param_2 + 0x2a3) = uVar5;
    *(undefined1 *)(param_2 + 0x2a2) = 0;
    (*pcVar3)(uVar2);
  }
  *(undefined1 *)(param_2 + 0x2a3) = uVar5;
  *(undefined1 *)(param_2 + 0x2a2) = 0;
  return;
}


