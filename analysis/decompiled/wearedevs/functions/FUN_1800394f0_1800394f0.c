/* FUN_1800394f0 @ 1800394f0 */

longlong FUN_1800394f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1;
  local_28 = param_1;
  if ((char)param_1[10] == '\0') {
    LOCK();
    lVar1 = param_1[3];
    *(char *)(param_1 + 3) = '\x01';
    UNLOCK();
    if ((char)lVar1 == '\0') {
      if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: slot.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\oneshot.rs"
                      ,0x20,&DAT_180206f48,param_4,param_2);
      }
      param_1[2] = param_2;
      LOCK();
      *(undefined1 *)(param_1 + 3) = 0;
      UNLOCK();
      param_2 = 0;
      if ((char)param_1[10] != '\0') {
        LOCK();
        lVar1 = param_1[3];
        *(char *)(param_1 + 3) = '\x01';
        UNLOCK();
        if ((char)lVar1 == '\0') {
          param_2 = param_1[2];
          param_1[2] = 0;
          LOCK();
          *(undefined1 *)(param_1 + 3) = 0;
          UNLOCK();
        }
        else {
          param_2 = 0;
        }
      }
    }
  }
  LOCK();
  *(undefined1 *)(param_1 + 10) = 1;
  UNLOCK();
  LOCK();
  lVar1 = param_1[6];
  *(char *)(param_1 + 6) = '\x01';
  UNLOCK();
  if ((char)lVar1 == '\0') {
    lVar1 = param_1[4];
    param_1[4] = 0;
    LOCK();
    lVar2 = param_1[6];
    *(undefined1 *)(param_1 + 6) = 0;
    UNLOCK();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 8))(param_1[5],(char)lVar2);
    }
  }
  LOCK();
  lVar1 = local_28[9];
  *(char *)(local_28 + 9) = '\x01';
  UNLOCK();
  if ((char)lVar1 == '\0') {
    lVar1 = local_28[7];
    local_28[7] = 0;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(local_28[8]);
    }
    LOCK();
    *(undefined1 *)(local_28 + 9) = 0;
    UNLOCK();
    LOCK();
    *local_28 = *local_28 + -1;
    lVar1 = *local_28;
    UNLOCK();
  }
  else {
    LOCK();
    *local_28 = *local_28 + -1;
    lVar1 = *local_28;
    UNLOCK();
  }
  if (lVar1 == 0) {
    FUN_18003df30(&local_30);
  }
  return param_2;
}


