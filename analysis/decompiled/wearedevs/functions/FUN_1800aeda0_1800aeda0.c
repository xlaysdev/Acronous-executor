/* FUN_1800aeda0 @ 1800aeda0 */

void FUN_1800aeda0(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint local_4;
  
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_4 = param_2 & 0xff;
    FUN_1800b87a0(param_1,&local_4,1);
    return;
  }
  uVar3 = (undefined1)(param_2 >> 6);
  if (param_2 < 0x800) {
    local_4._0_2_ = CONCAT11(uVar2,uVar3) & 0x3fff | 0x80c0;
    local_4 = (uint)(ushort)local_4;
    FUN_1800b87a0(param_1,&local_4,2);
    return;
  }
  uVar1 = (undefined1)(param_2 >> 0xc);
  if (param_2 < 0x10000) {
    local_4._0_3_ = CONCAT12(uVar2,CONCAT11(uVar3,uVar1)) & 0x3f3fff | 0x8080e0;
    local_4 = (uint)(uint3)local_4;
    FUN_1800b87a0(param_1,&local_4,3);
    return;
  }
  local_4 = CONCAT13(uVar2,CONCAT12(uVar3,CONCAT11(uVar1,(char)(param_2 >> 0x12)))) & 0x3f3f3fff |
            0x808080f0;
  FUN_1800b87a0(param_1,&local_4,4);
  return;
}


