/* FUN_1801e979d @ 1801e979d */

ulonglong FUN_1801e979d(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_60;
  undefined2 local_58;
  byte local_56;
  byte local_55;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    cVar3 = FUN_1801f3d30(lVar1,0x27);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (cVar3 == '\0') {
      do {
        while (param_2 != 0x22) {
          if (param_2 == 0x110000) {
            uVar5 = FUN_1801f3d30(lVar1,0x27);
            return uVar5;
          }
          if ((int)param_2 < 0xd) {
            if (param_2 == 0) {
              local_50 = 0x305c;
              goto LAB_1801e9897;
            }
            if (param_2 == 9) {
              local_50 = 0x745c;
              goto LAB_1801e9897;
            }
            if (param_2 == 10) {
              local_50 = 0x6e5c;
              goto LAB_1801e9897;
            }
LAB_1801e985d:
            if (((param_2 < 0x300) || (cVar3 = FUN_1801f3180(param_2), cVar3 == '\0')) &&
               (cVar3 = FUN_1801f3290(param_2), cVar3 != '\0')) {
              local_50 = (undefined2)param_2;
              uStack_4e = (undefined2)(param_2 >> 0x10);
              uVar8 = 0x81;
              bVar4 = 0x80;
              goto LAB_1801e98a4;
            }
            FUN_1801ead3e(&local_60,param_2);
            uStack_48 = local_58;
            local_50 = (undefined2)local_60;
            uStack_4e = (undefined2)(local_60 >> 0x10);
            uStack_4c = (undefined4)(local_60 >> 0x20);
            uVar8 = (ulonglong)local_55;
            bVar4 = local_56;
            if (local_56 < local_55) goto LAB_1801e98b4;
          }
          else {
            if (param_2 == 0xd) {
              local_50 = 0x725c;
            }
            else if (param_2 == 0x27) {
              local_50 = 0x275c;
            }
            else {
              if (param_2 != 0x5c) goto LAB_1801e985d;
              local_50 = 0x5c5c;
            }
LAB_1801e9897:
            uStack_4e = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uVar8 = 2;
            bVar4 = 0;
LAB_1801e98a4:
            local_58 = uStack_48;
            local_60 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
LAB_1801e98b4:
            uVar2 = local_60;
            uVar7 = (ulonglong)bVar4;
            local_58 = uStack_48;
            do {
              uVar6 = uVar2 & 0xffffffff;
              if ((byte)uVar8 < 0x81) {
                uVar6 = (ulonglong)*(byte *)((longlong)&local_60 + uVar7);
              }
              cVar3 = FUN_1801f3d30(lVar1,uVar6);
              if (cVar3 != '\0') goto LAB_1801e9929;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
          }
          param_2 = 0x110000;
        }
        cVar3 = FUN_1801f3d30(lVar1,0x22);
        param_2 = 0x110000;
      } while (cVar3 == '\0');
    }
  }
LAB_1801e9929:
  return uVar5 & 0xffffffff;
}


