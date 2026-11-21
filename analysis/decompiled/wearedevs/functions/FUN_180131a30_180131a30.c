/* FUN_180131a30 @ 180131a30 */

void FUN_180131a30(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined ***local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined **local_48;
  undefined *local_40;
  undefined *local_38;
  uint **local_30;
  uint *local_28;
  code *local_20;
  
  local_70 = param_2;
  local_6c = param_3;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fbca0, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fbc90), (char)uVar3 != '\0')))) &&
      (cVar2 = FUN_1801601d0(PTR_DAT_1802fbc90,uVar3), cVar2 != '\0')))) {
    local_50 = PTR_DAT_1802fbc90 + 0x30;
    local_28 = &local_70;
    local_20 = FUN_180132c20;
    local_38 = &DAT_180247b68;
    local_30 = &local_28;
    local_48 = &local_38;
    local_40 = &DAT_180247960;
    local_68 = 1;
    local_60 = &local_48;
    local_58 = 1;
    FUN_180160ae0(PTR_DAT_1802fbc90,&local_68);
    param_3 = local_6c;
    param_2 = local_70;
  }
  uVar1 = *param_1;
  local_68 = CONCAT62(local_68._2_6_,*(undefined2 *)(&DAT_180249fb8 + (ulonglong)param_2 * 2));
  FUN_1801b2af0(uVar1,&local_68,2);
  local_68 = CONCAT44(local_68._4_4_,
                      param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                      param_3 << 0x18);
  FUN_1801b2af0(uVar1,&local_68,4);
  return;
}


