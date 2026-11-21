/* FUN_180171ea0 @ 180171ea0 */

ulonglong FUN_180171ea0(void)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar2 = (longlong *)FUN_18009ec50(0);
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
  }
  local_28 = (undefined4)*plVar2;
  uStack_24 = *(undefined4 *)((longlong)plVar2 + 4);
  uStack_20 = (undefined4)plVar2[1];
  uStack_1c = *(undefined4 *)((longlong)plVar2 + 0xc);
  *plVar2 = *plVar2 + 1;
  iVar1 = DAT_1802fd4d8;
  LOCK();
  DAT_1802fd4d8 = DAT_1802fd4d8 + 1;
  UNLOCK();
  uVar3 = FUN_1801804c0(&local_28,iVar1);
  uVar4 = uVar3 >> 0x20;
  if (uVar4 == 0 && (int)uVar3 == 0) {
    uVar4 = 0;
  }
  return uVar4;
}


