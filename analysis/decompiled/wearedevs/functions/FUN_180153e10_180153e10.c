/* FUN_180153e10 @ 180153e10 */

undefined8 FUN_180153e10(uint *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  code *local_38;
  undefined8 local_30;
  undefined ***local_28;
  undefined8 local_20;
  undefined *local_18;
  
  if ((*(byte *)(param_2 + 7) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !frame.is_ack()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\settings.rs"
                  ,0x21,&DAT_180258760);
  }
  uVar9 = 10;
  if (1 < *param_1) {
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar8 = (uint)DAT_1802fd068, uVar8 - 1 < 2 ||
         ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fd058), (char)uVar8 != '\0')))) &&
        (cVar7 = FUN_1801601d0(PTR_DAT_1802fd058,uVar8), cVar7 != '\0')))) {
      local_18 = PTR_DAT_1802fd058 + 0x30;
      local_38 = FUN_180132ea0;
      local_50 = &DAT_1802586b8;
      local_48 = &local_40;
      local_60 = &local_50;
      local_58 = &DAT_180257d08;
      local_30 = 1;
      local_28 = &local_60;
      local_20 = 1;
      local_40 = param_2;
      FUN_180160ae0(PTR_DAT_1802fd058,&local_30);
    }
    *param_1 = 0;
    uVar9 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x2c);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x34);
    *(undefined8 *)(param_1 + 1) = *param_2;
    *(undefined8 *)(param_1 + 3) = uVar9;
    *(undefined8 *)(param_1 + 5) = uVar1;
    *(undefined8 *)(param_1 + 7) = uVar2;
    *(undefined8 *)(param_1 + 9) = uVar3;
    *(undefined8 *)(param_1 + 0xb) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar5;
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    uVar9 = 0xd;
  }
  return uVar9;
}


