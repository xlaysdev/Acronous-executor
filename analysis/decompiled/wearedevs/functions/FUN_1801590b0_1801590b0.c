/* FUN_1801590b0 @ 1801590b0 */

char * FUN_1801590b0(char *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_9c;
  uint local_98;
  uint local_94;
  char local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined **local_68;
  undefined *local_60;
  undefined *local_58;
  uint **local_50;
  uint *local_48;
  code *local_40;
  uint *local_38;
  code *local_30;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    *(bool *)(param_2 + 0x9d) = *(int *)(param_3 + 0x34) != 0;
  }
  if (*(int *)(param_3 + 0x18) == 1) {
    uVar5 = *(uint *)(param_3 + 0x1c);
    uVar6 = *(uint *)(param_2 + 0x8c);
    *(uint *)(param_2 + 0x8c) = uVar5;
    puVar2 = PTR_DAT_1802fd448;
    local_98 = uVar5;
    local_94 = uVar6;
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar4 = (uint)DAT_1802fd268, uVar4 - 1 < 2 ||
         ((uVar4 != 0 && (uVar4 = FUN_1801faaf0(&PTR_s__1802fd258), (char)uVar4 != '\0')))) &&
        (cVar3 = FUN_1801601d0(PTR_s__1802fd258,uVar4), cVar3 != '\0')))) {
      local_48 = &local_98;
      local_40 = FUN_1801ee6c0;
      local_38 = &local_94;
      local_30 = FUN_1801ee6c0;
      local_58 = &DAT_18025a5a0;
      local_50 = &local_48;
      local_68 = &local_58;
      local_60 = &DAT_180258dd0;
      local_90 = '\x01';
      uStack_8f = 0;
      uStack_88 = SUB81(&local_68,0);
      uStack_87 = (undefined7)((ulonglong)&local_68 >> 8);
      uStack_80 = 1;
      uStack_7f = 0;
      uStack_78 = SUB81(PTR_s__1802fd258 + 0x30,0);
      uStack_77 = (undefined7)((ulonglong)(PTR_s__1802fd258 + 0x30) >> 8);
      FUN_180160ae0(PTR_s__1802fd258,&local_90);
      uVar5 = local_98;
      uVar6 = local_94;
    }
    bVar7 = uVar5 < uVar6;
    local_9c = uVar5 - uVar6;
    bVar1 = !bVar7 && local_9c != 0;
    if (bVar1 != bVar7) {
      if ((char)(bVar1 - bVar7) == '\x01') {
        if (((*(longlong *)puVar2 == 0) &&
            ((uVar5 = (uint)DAT_1802fd298, uVar5 - 1 < 2 ||
             ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fd288), (char)uVar5 != '\0'))))))
           && (cVar3 = FUN_1801601d0(PTR_DAT_1802fd288,uVar5), cVar3 != '\0')) {
          local_48 = &local_9c;
          local_40 = FUN_1801ee6c0;
          local_58 = &DAT_18025a5ec;
          local_50 = &local_48;
          local_68 = &local_58;
          local_60 = &DAT_180258dd0;
          local_90 = '\x01';
          uStack_8f = 0;
          uStack_88 = SUB81(&local_68,0);
          uStack_87 = (undefined7)((ulonglong)&local_68 >> 8);
          uStack_80 = 1;
          uStack_7f = 0;
          uStack_78 = SUB81(PTR_DAT_1802fd288 + 0x30,0);
          uStack_77 = (undefined7)((ulonglong)(PTR_DAT_1802fd288 + 0x30) >> 8);
          FUN_180160ae0(PTR_DAT_1802fd288,&local_90);
        }
        FUN_1801526e0(&local_90,param_4,&local_9c);
      }
      else {
        local_9c = uVar6 - uVar5;
        if (((*(longlong *)puVar2 == 0) &&
            ((uVar5 = (uint)DAT_1802fd280, uVar5 - 1 < 2 ||
             ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fd270), (char)uVar5 != '\0'))))))
           && (cVar3 = FUN_1801601d0(PTR_DAT_1802fd270,uVar5), cVar3 != '\0')) {
          local_48 = &local_9c;
          local_40 = FUN_1801ee6c0;
          local_58 = &DAT_18025a5cb;
          local_50 = &local_48;
          local_68 = &local_58;
          local_60 = &DAT_180258dd0;
          local_90 = '\x01';
          uStack_8f = 0;
          uStack_88 = SUB81(&local_68,0);
          uStack_87 = (undefined7)((ulonglong)&local_68 >> 8);
          uStack_80 = 1;
          uStack_7f = 0;
          uStack_78 = SUB81(PTR_DAT_1802fd270 + 0x30,0);
          uStack_77 = (undefined7)((ulonglong)(PTR_DAT_1802fd270 + 0x30) >> 8);
          FUN_180160ae0(PTR_DAT_1802fd270,&local_90);
        }
        FUN_180152860(&local_90,param_4,&local_9c);
      }
      if (local_90 != '\x03') {
        *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_6f,uStack_70);
        *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_78,uStack_7f);
        *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_70,uStack_77);
        *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_88,uStack_8f);
        *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_80,uStack_87);
        *param_1 = local_90;
        return param_1;
      }
    }
  }
  *param_1 = '\x03';
  return param_1;
}


