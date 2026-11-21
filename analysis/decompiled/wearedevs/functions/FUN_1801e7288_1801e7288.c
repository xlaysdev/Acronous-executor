/* FUN_1801e7288 @ 1801e7288 */

ulonglong FUN_1801e7288(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  undefined8 *unaff_RDI;
  undefined7 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_31;
  
  cVar2 = (char)param_2;
  local_31 = cVar2;
  if (*param_1 == 0) {
LAB_1801e77bd:
    if (param_1[4] != 0) {
      uVar4 = FUN_1801edcb0("?",1);
      return uVar4;
    }
  }
  else {
    uVar5 = (int)param_1[3] + 1;
    *(uint *)(param_1 + 3) = uVar5;
    uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (500 < uVar5) {
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("{recursion limit reached}",0x19);
        unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
        if (cVar2 != '\0') goto LAB_1801e77e8;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_1801e77e6;
    }
    uVar4 = param_1[2];
    if ((ulonglong)param_1[1] <= uVar4) {
LAB_1801e7435:
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("{invalid syntax}",0x10);
        unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
        if (cVar2 != '\0') goto LAB_1801e77e8;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_1801e77e6;
    }
    bVar8 = *(byte *)(*param_1 + uVar4);
    param_1[2] = uVar4 + 1;
    if (bVar8 < 0x4d) {
      if (bVar8 != 0x42) {
        if (bVar8 == 0x43) {
          unaff_RDI = &local_58;
          FUN_1801e6f57(unaff_RDI,param_1,0x73);
          if ((char)local_58 == '\x01') {
LAB_1801e7591:
            bVar8 = local_58._1_1_;
          }
          else {
            lVar11 = CONCAT44(uStack_4c,uStack_50);
            if (*param_1 == 0) {
              if (param_1[4] != 0) {
                uVar5 = FUN_1801edcb0("?",1);
                unaff_RDI = (undefined8 *)(ulonglong)uVar5;
                goto LAB_1801e77e8;
              }
              goto LAB_1801e77e6;
            }
            FUN_1801e6fcb(unaff_RDI,param_1);
            if (local_58 != 0) {
              local_98 = local_48;
              uStack_94 = uStack_44;
              uStack_90 = uStack_40;
              uStack_8c = uStack_3c;
              local_a8 = (undefined4)local_58;
              uStack_a4 = local_58._4_4_;
              uStack_a0 = uStack_50;
              uStack_9c = uStack_4c;
              if (param_1[4] != 0) {
                cVar2 = FUN_1801eaf33(&local_a8);
                uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
                unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
                if (cVar2 != '\0') goto LAB_1801e77e8;
                lVar1 = param_1[4];
                if ((((lVar1 != 0) && (lVar11 != 0)) && ((*(uint *)(lVar1 + 0x10) & 0x800000) == 0))
                   && (((cVar2 = FUN_1801f0c50(lVar1,"[",1), cVar2 != '\0' ||
                        (cVar2 = FUN_1801eeb60(local_80,param_1[4]), cVar2 != '\0')) ||
                       (cVar2 = FUN_1801f0c50(param_1[4],"]",1), cVar2 != '\0')))) {
                  unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
                  goto LAB_1801e77e8;
                }
              }
              goto LAB_1801e7564;
            }
LAB_1801e778d:
            bVar8 = (byte)uStack_50;
          }
          local_58._1_1_ = bVar8;
          if (param_1[4] != 0) {
            pcVar6 = "{invalid syntax}";
            if (bVar8 != 0) {
              pcVar6 = "{recursion limit reached}";
            }
LAB_1801e75bc:
            cVar2 = FUN_1801edcb0(pcVar6,(ulonglong)bVar8 * 9 + 0x10);
            unaff_RDI = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
            local_58._1_1_ = bVar8;
            if (cVar2 != '\0') goto LAB_1801e77e8;
          }
LAB_1801e75cc:
          *param_1 = 0;
          *(byte *)(param_1 + 1) = local_58._1_1_;
          goto LAB_1801e77e6;
        }
        if (bVar8 != 0x49) goto LAB_1801e7435;
        cVar3 = FUN_1801e7288(param_1,param_2);
        unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
        if ((cVar3 != '\0') ||
           ((((cVar2 != '\0' && (param_1[4] != 0)) && (cVar2 = FUN_1801edcb0("::",2), cVar2 != '\0')
             ) || (((param_1[4] != 0 && (cVar2 = FUN_1801edcb0("<",1), cVar2 != '\0')) ||
                   (uVar4 = FUN_1801e8e2f(param_1), (uVar4 & 1) != 0)))))) goto LAB_1801e77e8;
        goto LAB_1801e7542;
      }
      cVar2 = FUN_1801e89db(param_1,&local_31);
      unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
LAB_1801e755c:
      if (cVar2 != '\0') goto LAB_1801e77e8;
    }
    else if (bVar8 < 0x58) {
      if (bVar8 == 0x4d) {
LAB_1801e746a:
        unaff_RDI = &local_58;
        FUN_1801e6f57(unaff_RDI,param_1,0x73);
        if ((char)local_58 == '\x01') {
          if (param_1[4] != 0) {
            pcVar6 = "{invalid syntax}";
            bVar8 = local_58._1_1_;
            if (local_58._1_1_ != 0) {
              pcVar6 = "{recursion limit reached}";
            }
            goto LAB_1801e75bc;
          }
          goto LAB_1801e75cc;
        }
        FUN_1801e9327(param_1);
        goto LAB_1801e74d1;
      }
      if (bVar8 != 0x4e) goto LAB_1801e7435;
      uVar4 = FUN_1801e7239(param_1);
      if ((uVar4 & 1) != 0) {
        if (param_1[4] != 0) {
          bVar12 = (uVar4 & 0x100) != 0;
          pcVar6 = "{recursion limit reached}";
          if (!bVar12) {
            pcVar6 = "{invalid syntax}";
          }
          cVar2 = FUN_1801edcb0(pcVar6,bVar12 * '\t' + '\x10');
          unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
          if (cVar2 != '\0') goto LAB_1801e77e8;
        }
        *param_1 = 0;
        *(byte *)(param_1 + 1) = (byte)(uVar4 >> 8) & 1;
        goto LAB_1801e77e6;
      }
      cVar2 = FUN_1801e7288(param_1,param_2);
      unaff_RDI = (undefined8 *)CONCAT71(uVar10,1);
      if (cVar2 != '\0') goto LAB_1801e77e8;
      if (*param_1 == 0) {
        if (param_1[4] == 0) goto LAB_1801e77e6;
        cVar2 = FUN_1801edcb0("::",2);
        if (cVar2 != '\0') goto LAB_1801e77e8;
        if (*param_1 == 0) goto LAB_1801e77bd;
      }
      FUN_1801e6f57(&local_58,param_1,0x73);
      if ((char)local_58 == '\x01') goto LAB_1801e7591;
      if (*param_1 == 0) goto LAB_1801e77bd;
      FUN_1801e6fcb(&local_58,param_1);
      if (local_58 == 0) goto LAB_1801e778d;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = uStack_50;
      uStack_6c = uStack_4c;
      iVar9 = (int)(uVar4 >> 0x20);
      if (iVar9 != 0x110000) {
        if ((param_1[4] != 0) && (cVar2 = FUN_1801edcb0("::{",3), cVar2 != '\0'))
        goto LAB_1801e77e8;
        if (iVar9 == 0x43) {
          if (param_1[4] != 0) {
            pcVar6 = "closure";
            uVar7 = 7;
LAB_1801e784e:
            cVar2 = FUN_1801edcb0(pcVar6,uVar7);
LAB_1801e786a:
            if (cVar2 != '\0') goto LAB_1801e77e8;
          }
        }
        else if (iVar9 == 0x53) {
          if (param_1[4] != 0) {
            pcVar6 = "shim";
            uVar7 = 4;
            goto LAB_1801e784e;
          }
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,iVar9);
          if (param_1[4] != 0) {
            cVar2 = FUN_1801edd10(&local_58);
            goto LAB_1801e786a;
          }
        }
        lVar11 = param_1[4];
        if (CONCAT44(uStack_5c,uStack_60) != 0 || CONCAT44(uStack_6c,uStack_70) != 0) {
          if (lVar11 != 0) {
            cVar2 = FUN_1801edcb0(":",1);
            if (cVar2 != '\0') goto LAB_1801e77e8;
            if (param_1[4] != 0) {
              cVar2 = FUN_1801eaf33(&local_78);
              if (cVar2 != '\0') goto LAB_1801e77e8;
              lVar11 = param_1[4];
              goto LAB_1801e7880;
            }
          }
          goto LAB_1801e7564;
        }
LAB_1801e7880:
        if (lVar11 == 0) goto LAB_1801e7564;
        cVar2 = FUN_1801edcb0("#",1);
        if (cVar2 != '\0') goto LAB_1801e77e8;
        if (param_1[4] == 0) goto LAB_1801e7564;
        cVar2 = FUN_1801ee720(&local_58);
        if (cVar2 != '\0') goto LAB_1801e77e8;
        if (param_1[4] == 0) goto LAB_1801e7564;
        pcVar6 = "}";
        goto LAB_1801e7552;
      }
      if ((CONCAT44(uStack_3c,uStack_40) != 0 || CONCAT44(uStack_4c,uStack_50) != 0) &&
         (param_1[4] != 0)) {
        cVar2 = FUN_1801edcb0("::",2);
        if (cVar2 != '\0') goto LAB_1801e77e8;
        if (param_1[4] != 0) {
          cVar2 = FUN_1801eaf33(&local_78);
          goto LAB_1801e755c;
        }
      }
    }
    else {
      if (bVar8 == 0x58) goto LAB_1801e746a;
      if (bVar8 != 0x59) goto LAB_1801e7435;
LAB_1801e74d1:
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("<",1);
        unaff_RDI = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (cVar2 != '\0') goto LAB_1801e77e8;
      }
      cVar2 = FUN_1801e7926(param_1);
      unaff_RDI = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((cVar2 != '\0') ||
         ((bVar8 != 0x4d &&
          (((param_1[4] != 0 && (cVar2 = FUN_1801edcb0(" as ",4), cVar2 != '\0')) ||
           (cVar2 = FUN_1801e7288(param_1,0), cVar2 != '\0')))))) goto LAB_1801e77e8;
LAB_1801e7542:
      if (param_1[4] != 0) {
        pcVar6 = ">";
LAB_1801e7552:
        cVar2 = FUN_1801edcb0(pcVar6,1);
        goto LAB_1801e755c;
      }
    }
LAB_1801e7564:
    if (*param_1 != 0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    }
  }
LAB_1801e77e6:
  unaff_RDI = (undefined8 *)0x0;
LAB_1801e77e8:
  return (ulonglong)unaff_RDI & 0xffffffff;
}


