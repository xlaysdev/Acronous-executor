/* FUN_180039100 @ 180039100 */

ulonglong FUN_180039100(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  local_28 = param_1;
  local_20 = param_1;
  if (*(char *)((longlong)param_1 + 0x42) == '\0') {
    uVar3 = CONCAT71(uVar4,1);
    LOCK();
    lVar1 = param_1[8];
    *(char *)(param_1 + 8) = '\x01';
    UNLOCK();
    if ((char)lVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: slot.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\oneshot.rs"
                      ,0x20,&DAT_180206f48);
      }
      *(undefined1 *)((longlong)param_1 + 0x41) = 1;
      LOCK();
      *(undefined1 *)(param_1 + 8) = 0;
      UNLOCK();
      uVar3 = 0;
      if (*(char *)((longlong)param_1 + 0x42) != '\0') {
        LOCK();
        lVar1 = param_1[8];
        *(char *)(param_1 + 8) = '\x01';
        UNLOCK();
        if ((char)lVar1 == '\0') {
          uVar3 = (ulonglong)*(byte *)((longlong)param_1 + 0x41);
          *(undefined1 *)((longlong)param_1 + 0x41) = 0;
          LOCK();
          *(undefined1 *)(param_1 + 8) = 0;
          UNLOCK();
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  UNLOCK();
  LOCK();
  lVar1 = param_1[4];
  *(char *)(param_1 + 4) = '\x01';
  UNLOCK();
  if ((char)lVar1 == '\0') {
    lVar1 = param_1[2];
    param_1[2] = 0;
    LOCK();
    lVar2 = param_1[4];
    *(undefined1 *)(param_1 + 4) = 0;
    UNLOCK();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 8))(param_1[3],(char)lVar2);
    }
  }
  LOCK();
  lVar1 = local_20[7];
  *(char *)(local_20 + 7) = '\x01';
  UNLOCK();
  if ((char)lVar1 == '\0') {
    lVar1 = local_20[5];
    local_20[5] = 0;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(local_20[6]);
    }
    LOCK();
    *(undefined1 *)(local_20 + 7) = 0;
    UNLOCK();
    LOCK();
    *local_20 = *local_20 + -1;
    lVar1 = *local_20;
    UNLOCK();
  }
  else {
    LOCK();
    *local_20 = *local_20 + -1;
    lVar1 = *local_20;
    UNLOCK();
  }
  if (lVar1 == 0) {
    FUN_18003cda0(&local_28);
  }
  return uVar3 & 0xffffffff;
}


