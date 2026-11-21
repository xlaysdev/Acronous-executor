/* FUN_180170ab0 @ 180170ab0 */

void FUN_180170ab0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') goto LAB_180170aea;
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
LAB_180170aea:
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
    }
    local_28 = (undefined4)*plVar4;
    uStack_24 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_20 = (undefined4)plVar4[1];
    uStack_1c = *(undefined4 *)((longlong)plVar4 + 0xc);
    *plVar4 = *plVar4 + 1;
    iVar3 = DAT_1802fd4d8;
    LOCK();
    DAT_1802fd4d8 = DAT_1802fd4d8 + 1;
    UNLOCK();
    FUN_1801804c0(&local_28,iVar3);
  }
  *(undefined4 *)(lVar2 + 0xa8) = 1;
  *(undefined8 *)(lVar2 + 0xac) = uVar1;
  return;
}


