/* FUN_1801bdab0 @ 1801bdab0 */

void FUN_1801bdab0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong local_48;
  uint local_3c [3];
  
  local_3c[1] = 0xfffffffe;
  local_3c[2] = 0xffffffff;
  iVar2 = 0x3c;
  uVar1 = NtQueryInformationProcess(param_2,0x3c,0,0,local_3c);
  if ((int)uVar1 < 0) {
    local_60 = FUN_1801c9620(uVar1 | 0x10000000);
    local_58 = iVar2;
    if (((iVar2 != -0x6ffffffb) && (iVar2 != -0x2ffffffc)) && (iVar2 != -0x2fffffdd)) {
      if (local_60 != 0) {
        FUN_180111960(&local_60);
      }
      goto LAB_1801bdbc0;
    }
    if (local_60 != 0) {
      FUN_180111960(&local_60);
    }
  }
  local_60 = CONCAT44(local_60._4_4_,local_3c[0]);
  lVar4 = (ulonglong)(local_3c[0] & 0xfffffffe) + 2;
  FUN_180027490();
  lVar3 = thunk_FUN_1801d32d0(lVar4,2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(2,lVar4);
  }
  iVar2 = NtQueryInformationProcess(param_2,0x3c,lVar3,local_3c[0],&local_60);
  if (-1 < iVar2) {
    *(undefined2 *)(lVar3 + (ulonglong)(local_3c[0] >> 1) * 2) = 0;
    local_50 = lVar4;
    local_48 = lVar3;
    FUN_1801be060(param_1,*(undefined8 *)(lVar3 + 8));
    thunk_FUN_1801d3330(local_48,local_50,2);
    return;
  }
  thunk_FUN_1801d3330(lVar3,lVar4,2);
LAB_1801bdbc0:
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return;
}


