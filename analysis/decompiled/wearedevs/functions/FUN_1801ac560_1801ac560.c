/* FUN_1801ac560 @ 1801ac560 */

ulonglong FUN_1801ac560(char *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  uint *puVar4;
  ulonglong unaff_RBX;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (*param_1 != '\0') {
    if (*param_1 == '\x01') {
      lVar6 = (ulonglong)(byte)param_1[1] + 4;
      pcVar3 = "http";
      if ((ulonglong)(byte)param_1[1] != 0) {
        pcVar3 = "https";
      }
    }
    else {
      pcVar3 = *(char **)(*(longlong *)(param_1 + 8) + 8);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    }
    cVar1 = FUN_1801f0c50(param_2,pcVar3,lVar6);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((cVar1 != '\0') || (cVar1 = FUN_1801f0c50(param_2,"://",3), cVar1 != '\0'))
    goto LAB_1801ac70b;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_1801f0c50(param_2,*(undefined8 *)(param_1 + 0x18));
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (cVar1 != '\0') goto LAB_1801ac70b;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  if ((uVar2 == 0) && (*param_1 == '\0')) {
    puVar4 = (uint *)0x1;
    lVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)*(ushort *)(param_1 + 0x50);
    puVar4 = *(uint **)(param_1 + 0x38);
    if (uVar7 != 0xffff) {
      if (uVar7 == 0) {
        if (puVar4 == (uint *)0x0) goto LAB_1801ac669;
        lVar6 = 1;
        puVar4 = &UINT_180283280;
        goto LAB_1801ac69c;
      }
      if (uVar7 < uVar2) {
        if (*(char *)((longlong)puVar4 + uVar7) < -0x40) {
LAB_1801ac669:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(puVar4,uVar2,0,uVar7,&PTR_s_C__Users_burne__cargo_registry_s_180283388);
        }
        uVar2 = uVar7;
      }
      else if (puVar4 == (uint *)0x0 || uVar2 != uVar7) goto LAB_1801ac669;
    }
    lVar6 = uVar2 + (uVar2 == 0);
    if (uVar2 == 0) {
      puVar4 = &UINT_180283280;
    }
  }
LAB_1801ac69c:
  cVar1 = FUN_1801f0c50(param_2,puVar4,lVar6);
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  if (cVar1 == '\0') {
    if ((ulonglong)*(ushort *)(param_1 + 0x50) != 0xffff) {
      uVar7 = (ulonglong)*(ushort *)(param_1 + 0x50) + 1;
      lVar6 = *(longlong *)(param_1 + 0x38);
      uVar2 = *(ulonglong *)(param_1 + 0x40);
      lVar5 = uVar2 - uVar7;
      if (uVar2 < uVar7 || lVar5 == 0) {
        if (lVar5 != 0) goto LAB_1801ac724;
        lVar5 = 0;
      }
      else if (*(char *)(lVar6 + uVar7) < -0x40) {
LAB_1801ac724:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar6,uVar2,uVar7,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_1802833a0);
      }
      cVar1 = FUN_1801f0c50(param_2,
                            "?InvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingPathDoesNotStartWithSlashTooLongEmptySchemeTooLong"
                            ,1);
      if ((cVar1 != '\0') || (cVar1 = FUN_1801f0c50(param_2,lVar6 + uVar7,lVar5), cVar1 != '\0'))
      goto LAB_1801ac70b;
    }
    unaff_RBX = 0;
  }
LAB_1801ac70b:
  return unaff_RBX & 0xffffffff;
}


