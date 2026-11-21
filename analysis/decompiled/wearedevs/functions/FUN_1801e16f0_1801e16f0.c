/* FUN_1801e16f0 @ 1801e16f0 */

undefined8 FUN_1801e16f0(undefined8 *param_1,ulonglong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_1c [3];
  
  local_1c[1] = 0xfffffffe;
  local_1c[2] = 0xffffffff;
  uVar6 = (uint)param_2;
  bVar5 = (byte)param_2;
  if (uVar6 < 0x80) {
    local_1c[0] = (uint)bVar5;
  }
  else {
    uVar1 = (undefined1)(param_2 >> 6);
    if (uVar6 < 0x800) {
      local_1c[0] = (uint)(CONCAT11(bVar5,uVar1) & 0x3fff | 0x80c0);
    }
    else {
      uVar2 = (undefined1)(param_2 >> 0xc);
      if (uVar6 < 0x10000) {
        local_1c[0] = (uint)(CONCAT12(bVar5,CONCAT11(uVar1,uVar2)) & 0x3f3fff | 0x8080e0);
      }
      else {
        local_1c[0] = CONCAT13(bVar5,CONCAT12(uVar1,CONCAT11(uVar2,(char)(uVar6 >> 0x12)))) &
                      0x3f3f3fff | 0x808080f0;
      }
    }
  }
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&DAT_180290e30);
  }
  puVar4[2] = 0xffffffffffffffff;
  uVar3 = FUN_1801d6150(puVar4 + 3,local_1c);
  uVar7 = 0;
  if ((uVar3 & 0xffffffff00000003) != 0x600000002) {
    uVar7 = uVar3;
  }
  puVar4[2] = puVar4[2] + 1;
  if (uVar7 != 0) {
    puVar4 = param_1 + 1;
    if (param_1[1] != 0) {
      FUN_1801e2450(puVar4);
    }
    *puVar4 = uVar7;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),uVar7 != 0);
}


