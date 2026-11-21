/* FUN_18016a720 @ 18016a720 */

longlong FUN_18016a720(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(uint *)(param_1 + 0x8c) == 0) {
    FUN_180201c40(&PTR_s_C__Users_burne__cargo_registry_s_180261098);
    pcVar1 = (code *)swi(3);
    lVar2 = (*pcVar1)();
    return lVar2;
  }
  if (*(uint *)(param_1 + 0x88) % *(uint *)(param_1 + 0x8c) == 0) {
    lVar2 = FUN_180176c60(param_2 + 0x128);
    if (lVar2 == 0) {
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar3 = 0;
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x50);
        uVar4 = 0;
        if (*(ulonglong *)(param_1 + 0x40) <= lVar2 + 1U) {
          uVar4 = *(ulonglong *)(param_1 + 0x40);
        }
        *(ulonglong *)(param_1 + 0x50) = (lVar2 - uVar4) + 1;
        lVar3 = *(longlong *)(param_1 + 0x58) + -1;
        *(longlong *)(param_1 + 0x58) = lVar3;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar2 * 8);
      }
      *(longlong *)(param_2 + 0x18) = lVar3;
      return lVar2;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      lVar2 = FUN_180176c60(param_2 + 0x128);
      return lVar2;
    }
    lVar2 = *(longlong *)(param_1 + 0x50);
    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x40) <= lVar2 + 1U) {
      uVar4 = *(ulonglong *)(param_1 + 0x40);
    }
    *(ulonglong *)(param_1 + 0x50) = (lVar2 - uVar4) + 1;
    lVar3 = *(longlong *)(param_1 + 0x58) + -1;
    *(longlong *)(param_1 + 0x58) = lVar3;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar2 * 8);
    *(longlong *)(param_2 + 0x18) = lVar3;
  }
  return lVar2;
}


