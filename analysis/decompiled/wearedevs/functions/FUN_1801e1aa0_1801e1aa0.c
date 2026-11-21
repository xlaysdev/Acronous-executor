/* FUN_1801e1aa0 @ 1801e1aa0 */

bool FUN_1801e1aa0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong _Size;
  undefined1 uVar7;
  ulonglong uVar8;
  uint local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  uVar5 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_44[0] = param_2 & 0xff;
    uVar6 = 1;
  }
  else {
    uVar3 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_44[0] = (uint)(CONCAT11(uVar5,uVar3) & 0x3fff | 0x80c0);
      uVar6 = 2;
    }
    else {
      uVar7 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_44[0] = (uint)(CONCAT12(uVar5,CONCAT11(uVar3,uVar7)) & 0x3f3fff | 0x8080e0);
        uVar6 = 3;
      }
      else {
        local_44[0] = CONCAT13(uVar5,CONCAT12(uVar3,CONCAT11(uVar7,(char)(param_2 >> 0x12)))) &
                      0x3f3f3fff | 0x808080f0;
        uVar6 = 4;
      }
    }
  }
  plVar1 = (longlong *)*param_1;
  uVar8 = plVar1[1];
  uVar2 = plVar1[2];
  uVar4 = uVar2;
  if (uVar8 < uVar2) {
    uVar4 = uVar8;
  }
  uVar8 = uVar8 - uVar4;
  _Size = uVar6;
  if (uVar8 < uVar6) {
    _Size = uVar8;
  }
  memcpy((void *)(uVar4 + *plVar1),local_44,_Size);
  plVar1[2] = _Size + uVar2;
  if (uVar8 < uVar6) {
    if (param_1[1] != 0) {
      FUN_1801e2450(param_1 + 1);
    }
    param_1[1] = (longlong)&PTR_s_failed_to_write_whole_buffer_18028ef30;
  }
  return uVar8 < uVar6;
}


