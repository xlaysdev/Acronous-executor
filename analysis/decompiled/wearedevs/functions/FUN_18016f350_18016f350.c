/* FUN_18016f350 @ 18016f350 */

void FUN_18016f350(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = param_1[3];
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_38 = param_1;
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
    }
    FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  if (*(char *)(lVar2 + 0xb6) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: c.runtime.get().is_entered()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\context\\runtime.rs"
                  ,0x2e,&DAT_180262350);
  }
  *(undefined1 *)(lVar2 + 0xb6) = 2;
  if ((*(byte *)(lVar2 + 0xa8) & 1) == 0) {
    plVar4 = (longlong *)FUN_18009ec50(0);
    if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
    }
    local_48 = (undefined4)*plVar4;
    uStack_44 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_40 = (undefined4)plVar4[1];
    uStack_3c = *(undefined4 *)((longlong)plVar4 + 0xc);
    *plVar4 = *plVar4 + 1;
    iVar3 = DAT_1802fd4d8;
    LOCK();
    DAT_1802fd4d8 = DAT_1802fd4d8 + 1;
    UNLOCK();
    FUN_1801804c0(&local_48,iVar3);
  }
  *(undefined4 *)(lVar2 + 0xa8) = 1;
  *(longlong *)(lVar2 + 0xac) = lVar1;
  FUN_18016ec90(&PTR_FUN_180261980,local_38,local_38 + 2);
  if (*local_38 != 2) {
    if (*local_38 == 0) {
      plVar4 = (longlong *)local_38[1];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_1801635e0();
        return;
      }
    }
    else {
      plVar4 = (longlong *)local_38[1];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180162f80();
        return;
      }
    }
  }
  return;
}


