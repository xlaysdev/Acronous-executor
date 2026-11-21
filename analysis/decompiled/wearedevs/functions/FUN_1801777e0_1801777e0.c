/* FUN_1801777e0 @ 1801777e0 */

undefined8 FUN_1801777e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_30;
  
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("internal error: entered unreachable code: unexpected stageC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\task\\core.rs"
                  ,0x75,&DAT_1802631b8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar1 = lVar3 + 0x70;
  if (*(char *)(lVar3 + 0xb8) == '\x01') {
LAB_180177864:
    local_30 = *(undefined8 *)(lVar3 + 0xa0);
    *(undefined8 *)(lVar3 + 0xa0) = uVar2;
    bVar5 = false;
  }
  else {
    if (*(char *)(lVar3 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar1,FUN_18016d130);
      *(undefined1 *)(lVar3 + 0xb8) = 1;
      goto LAB_180177864;
    }
    local_30 = 0;
    bVar5 = true;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("[internal exception] blocking task ran twice.C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\task.rs"
                  ,0x2d,&DAT_180262d00);
  }
  if (!bVar5) {
    *(undefined1 *)(lVar3 + 0xb4) = 0;
  }
  FUN_180181eb0();
  if (*(char *)(lVar3 + 0xb8) != '\x01') {
    if (*(char *)(lVar3 + 0xb8) == '\x02') {
      local_30 = 0;
      goto LAB_1801778e9;
    }
    FUN_1801d8880(lVar1,FUN_18016d130);
    *(undefined1 *)(lVar3 + 0xb8) = 1;
  }
  *(undefined8 *)(lVar3 + 0xa0) = local_30;
  *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(param_1 + 0x10);
LAB_1801778e9:
  FUN_180177370((undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 2;
  if (*(char *)(lVar3 + 0xb8) != '\x01') {
    if (*(char *)(lVar3 + 0xb8) == '\x02') {
      return 0;
    }
    FUN_1801d8880(lVar1,FUN_18016d130);
    *(undefined1 *)(lVar3 + 0xb8) = 1;
  }
  *(undefined8 *)(lVar3 + 0xa0) = local_30;
  return 0;
}


