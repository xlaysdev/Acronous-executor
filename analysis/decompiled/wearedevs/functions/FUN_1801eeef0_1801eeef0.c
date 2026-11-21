/* FUN_1801eeef0 @ 1801eeef0 */

ulonglong FUN_1801eeef0(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 uVar4;
  ulonglong _Size;
  undefined1 uVar5;
  uint local_24;
  
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_24 = param_2 & 0xff;
    _Size = 1;
  }
  else {
    uVar4 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_24 = (uint)(CONCAT11(uVar2,uVar4) & 0x3fff | 0x80c0);
      _Size = 2;
    }
    else {
      uVar5 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_24 = (uint)(CONCAT12(uVar2,CONCAT11(uVar4,uVar5)) & 0x3f3fff | 0x8080e0);
        _Size = 3;
      }
      else {
        local_24 = CONCAT13(uVar2,CONCAT12(uVar4,CONCAT11(uVar5,(char)(param_2 >> 0x12)))) &
                   0x3f3f3fff | 0x808080f0;
        _Size = 4;
      }
    }
  }
  uVar1 = *param_1;
  uVar3 = uVar1 + _Size;
  if (0x3a >= uVar3 && !CARRY8(uVar1,_Size)) {
    memcpy((void *)((longlong)param_1 + uVar1 + 8),&local_24,_Size);
    *param_1 = uVar3;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0x3a < uVar3 || CARRY8(uVar1,_Size)) &
         0xffffffff;
}


