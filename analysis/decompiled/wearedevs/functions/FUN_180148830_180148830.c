/* FUN_180148830 @ 180148830 */

void FUN_180148830(ulonglong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  bool bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 local_38;
  byte local_37;
  byte local_36;
  byte local_35 [3];
  byte local_32;
  byte local_31;
  
  if (param_4 == '\0') {
    if (param_1 < 0xf) {
      pbVar2 = &local_37;
      local_37 = (byte)param_1;
    }
    else {
      param_1 = param_1 - 0xf;
      local_38 = 0xf;
      FUN_1801b2af0(param_5,&local_38,1);
      if (0x7f < param_1) {
        uVar3 = param_1;
        do {
          local_35[0] = (byte)uVar3 | 0x80;
          FUN_1801b2af0(param_5,local_35,1);
          param_1 = uVar3 >> 7;
          bVar1 = 0x3fff < uVar3;
          uVar3 = param_1;
        } while (bVar1);
      }
      local_36 = (byte)param_1;
      pbVar2 = &local_36;
    }
  }
  else if (param_1 < 0xf) {
    local_35[2] = (byte)param_1 | 0x10;
    pbVar2 = local_35 + 2;
  }
  else {
    param_1 = param_1 - 0xf;
    local_35[1] = 0x1f;
    FUN_1801b2af0(param_5,local_35 + 1,1);
    if (0x7f < param_1) {
      uVar3 = param_1;
      do {
        local_31 = (byte)uVar3 | 0x80;
        FUN_1801b2af0(param_5,&local_31,1);
        param_1 = uVar3 >> 7;
        bVar1 = 0x3fff < uVar3;
        uVar3 = param_1;
      } while (bVar1);
    }
    local_32 = (byte)param_1;
    pbVar2 = &local_32;
  }
  FUN_1801b2af0(param_5,pbVar2,1);
  FUN_180148430(param_2,param_3,param_5);
  return;
}


