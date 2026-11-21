/* FUN_180176f50 @ 180176f50 */

void FUN_180176f50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_40;
  undefined1 local_38 [16];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_1801ef8f0(local_38);
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x410;
    do {
      local_40 = lVar1;
      FUN_1801ef790(local_38,&local_40,&DAT_180260b68);
      lVar2 = lVar2 + -0x410;
      lVar1 = lVar1 + 0x410;
    } while (lVar2 != 0);
  }
  FUN_1801ef8b0(local_38);
  return;
}


