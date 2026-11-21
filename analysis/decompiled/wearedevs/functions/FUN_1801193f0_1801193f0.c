/* FUN_1801193f0 @ 1801193f0 */

undefined8 FUN_1801193f0(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  ulonglong _Size;
  undefined **local_38;
  uint local_2c [3];
  
  local_2c[1] = 0xfffffffe;
  local_2c[2] = 0xffffffff;
  uVar3 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_2c[0] = param_2 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar1 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_2c[0] = (uint)(CONCAT11(uVar3,uVar1) & 0x3fff | 0x80c0);
      uVar5 = 2;
    }
    else {
      uVar6 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_2c[0] = (uint)(CONCAT12(uVar3,CONCAT11(uVar1,uVar6)) & 0x3f3fff | 0x8080e0);
        uVar5 = 3;
      }
      else {
        local_2c[0] = CONCAT13(uVar3,CONCAT12(uVar1,CONCAT11(uVar6,(char)(param_2 >> 0x12)))) &
                      0x3f3f3fff | 0x808080f0;
        uVar5 = 4;
      }
    }
  }
  uVar2 = (ulonglong)*(byte *)(param_1 + 0x13);
  if (0x12 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar2,0x12,0x12,&PTR_s_C__Users_burne__cargo_registry_s_180240b90);
  }
  uVar4 = 0x12 - uVar2;
  _Size = uVar5;
  if (uVar4 < uVar5) {
    _Size = uVar4;
  }
  memcpy((void *)(uVar2 + param_1),local_2c,_Size);
  if (uVar4 < uVar5) {
    local_38 = &PTR_DAT_1802409e8;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("&mut [u8].write() cannot error",0x1e,&local_38,&PTR_FUN_180240a20,
                  &PTR_s_C__Users_burne__cargo_registry_s_180240b78);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)uVar5;
  return 0;
}


