/* FUN_1801e19a0 @ 1801e19a0 */

undefined8 FUN_1801e19a0(longlong *param_1,uint param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined1 uVar3;
  undefined1 uVar4;
  uint local_24;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_24 = param_2 & 0xff;
    _Size = 1;
  }
  else {
    uVar3 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_24 = (uint)(CONCAT11(uVar1,uVar3) & 0x3fff | 0x80c0);
      _Size = 2;
    }
    else {
      uVar4 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_24 = (uint)(CONCAT12(uVar1,CONCAT11(uVar3,uVar4)) & 0x3f3fff | 0x8080e0);
        _Size = 3;
      }
      else {
        local_24 = CONCAT13(uVar1,CONCAT12(uVar3,CONCAT11(uVar4,(char)(param_2 >> 0x12)))) &
                   0x3f3f3fff | 0x808080f0;
        _Size = 4;
      }
    }
  }
  param_1 = (longlong *)*param_1;
  lVar2 = param_1[2];
  if ((ulonglong)(*param_1 - lVar2) < _Size) {
    FUN_180200f70(param_1,lVar2,_Size,1,1);
    lVar2 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar2),&local_24,_Size);
  param_1[2] = lVar2 + _Size;
  return 0;
}


