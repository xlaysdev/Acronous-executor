/* FUN_180152550 @ 180152550 */

void FUN_180152550(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_2c;
  undefined1 local_28 [24];
  
  local_2c = *(int *)((longlong)param_1 + 0xc);
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    if (*(longlong *)(lVar1 + 0x38) != 1) {
      uVar2 = FUN_180153f70(lVar1 + 0x60,&local_2c);
      FUN_180154b00(local_28,lVar1 + 0x28,uVar2,&local_2c);
      return;
    }
    if (local_2c == *(int *)(*(longlong *)(lVar1 + 0x30) + 8)) {
      FUN_180154d50(local_28,lVar1 + 0x28);
    }
  }
  return;
}


