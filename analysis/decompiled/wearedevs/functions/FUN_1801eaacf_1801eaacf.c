/* FUN_1801eaacf @ 1801eaacf */

void FUN_1801eaacf(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  uint local_c;
  
  uVar2 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_c = param_2 & 0xff;
    uVar4 = 1;
  }
  else {
    uVar3 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_c = (uint)(CONCAT11(uVar2,uVar3) & 0x3fff | 0x80c0);
      uVar4 = 2;
    }
    else {
      uVar1 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_c = (uint)(CONCAT12(uVar2,CONCAT11(uVar3,uVar1)) & 0x3f3fff | 0x8080e0);
        uVar4 = 3;
      }
      else {
        local_c = CONCAT13(uVar2,CONCAT12(uVar3,CONCAT11(uVar1,(char)(param_2 >> 0x12)))) &
                  0x3f3f3fff | 0x808080f0;
        uVar4 = 4;
      }
    }
  }
  FUN_1801ec38a(param_1,&local_c,uVar4);
  return;
}


