/* FUN_1801e1880 @ 1801e1880 */

bool FUN_1801e1880(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  uint local_1c [3];
  
  local_1c[1] = 0xfffffffe;
  local_1c[2] = 0xffffffff;
  uVar3 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_1c[0] = param_2 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_1c[0] = (uint)(CONCAT11(uVar3,uVar2) & 0x3fff | 0x80c0);
      uVar5 = 2;
    }
    else {
      uVar4 = (undefined1)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        local_1c[0] = (uint)(CONCAT12(uVar3,CONCAT11(uVar2,uVar4)) & 0x3f3fff | 0x8080e0);
        uVar5 = 3;
      }
      else {
        local_1c[0] = CONCAT13(uVar3,CONCAT12(uVar2,CONCAT11(uVar4,(char)(param_2 >> 0x12)))) &
                      0x3f3f3fff | 0x808080f0;
        uVar5 = 4;
      }
    }
  }
  lVar1 = FUN_1801e4520(*param_1,local_1c,uVar5);
  if (lVar1 != 0) {
    if (param_1[1] != 0) {
      FUN_1801e2450(param_1 + 1);
    }
    param_1[1] = lVar1;
  }
  return lVar1 != 0;
}


