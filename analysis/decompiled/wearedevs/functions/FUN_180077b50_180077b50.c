/* FUN_180077b50 @ 180077b50 */

void FUN_180077b50(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar1 = *param_1;
  if ((uVar1 == 10) || (iVar5 = (int)uVar1, iVar5 == 9)) {
    return;
  }
  lVar6 = 1;
  if (5 < uVar1) {
    lVar6 = uVar1 - 6;
  }
  if (lVar6 != 1) {
    if (lVar6 != 0) {
      return;
    }
    plVar2 = (longlong *)param_1[0x45];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cf20(param_1 + 0x45);
      }
    }
    if (1 < (byte)param_1[0x32]) {
      plVar2 = (longlong *)param_1[0x33];
      (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
      thunk_FUN_1801d3330(plVar2,0x20,8);
    }
    (**(code **)(param_1[0x34] + 0x20))(param_1[0x37],param_1[0x35],param_1[0x36]);
    FUN_18007aaf0(param_1 + 0x20);
    FUN_18000adf0(param_1 + 0x38);
    plVar2 = (longlong *)param_1[0x14];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x14);
    }
    plVar2 = (longlong *)param_1[0x16];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(param_1 + 0x16);
      }
    }
    plVar2 = (longlong *)param_1[0x43];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x43);
      return;
    }
    return;
  }
  if (iVar5 == 5) {
LAB_180077cc0:
    FUN_18007a530(param_1 + 1);
    return;
  }
  lVar6 = 0;
  if (1 < uVar1) {
    lVar6 = uVar1 - 2;
  }
  if (lVar6 != 1) {
    if (lVar6 != 0) {
      return;
    }
    if (iVar5 == 2) {
      return;
    }
    uVar1 = param_1[0x2a];
    if (uVar1 != 5) {
      lVar6 = 0;
      if (1 < uVar1) {
        lVar6 = uVar1 - 2;
      }
      if (lVar6 == 1) {
        uVar1 = param_1[0x2b];
        puVar3 = (undefined8 *)param_1[0x2c];
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(uVar1);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_1801d3330(uVar1,puVar3[1],puVar3[2]);
        }
      }
      else if ((lVar6 == 0) && (FUN_18007aaf0(param_1 + 0x2a), (char)param_1[0x3c] != '\x03')) {
        FUN_18000adf0(param_1 + 0x3c);
      }
    }
    FUN_1800797b0(param_1);
    return;
  }
  if ((char)param_1[0xf] != '\x04') goto LAB_180077cc0;
  uVar1 = param_1[1];
  switch(*(undefined1 *)(uVar1 + 0x1a9)) {
  case 0:
    plVar2 = *(longlong **)(uVar1 + 0x98);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(uVar1 + 0x98);
    }
    plVar2 = *(longlong **)(uVar1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(uVar1 + 0xa8);
      }
    }
    uVar4 = *(undefined8 *)(uVar1 + 0xf8);
    puVar3 = *(undefined8 **)(uVar1 + 0x100);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar4);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar4,puVar3[1],puVar3[2]);
    }
    plVar2 = *(longlong **)(uVar1 + 0x168);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(uVar1 + 0x168);
    }
    plVar2 = *(longlong **)(uVar1 + 0x178);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cf20(uVar1 + 0x178);
      }
    }
    FUN_180079680(uVar1 + 0x130);
    goto LAB_18007823a;
  default:
    goto switchD_180077d26_caseD_1;
  case 3:
    if (*(char *)(uVar1 + 0x538) != '\x03') {
      if (*(char *)(uVar1 + 0x538) == '\0') {
        uVar4 = *(undefined8 *)(uVar1 + 0x248);
        puVar3 = *(undefined8 **)(uVar1 + 0x250);
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(uVar4);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_1801d3330(uVar4,puVar3[1],puVar3[2]);
        }
        plVar2 = *(longlong **)(uVar1 + 0x260);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003cc40(uVar1 + 0x260);
        }
        plVar2 = *(longlong **)(uVar1 + 0x270);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_18003cc40(uVar1 + 0x270);
          }
        }
      }
      break;
    }
    if (*(char *)(uVar1 + 0x534) == '\x03') {
      if (*(char *)(uVar1 + 0x410) == '\x03') {
        uVar4 = *(undefined8 *)(uVar1 + 0x340);
        puVar3 = *(undefined8 **)(uVar1 + 0x348);
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(uVar4);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_1801d3330(uVar4,puVar3[1],puVar3[2]);
        }
        *(undefined1 *)(uVar1 + 0x411) = 0;
      }
      else if (*(char *)(uVar1 + 0x410) == '\0') {
        uVar4 = *(undefined8 *)(uVar1 + 0x328);
        puVar3 = *(undefined8 **)(uVar1 + 0x330);
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(uVar4);
        }
        if (puVar3[1] != 0) {
          thunk_FUN_1801d3330(uVar4,puVar3[1],puVar3[2]);
        }
      }
      plVar2 = *(longlong **)(uVar1 + 0x448);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003cc40(uVar1 + 0x448);
        }
      }
      *(undefined1 *)(uVar1 + 0x530) = 0;
      plVar2 = *(longlong **)(uVar1 + 0x438);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(uVar1 + 0x438);
      }
      *(undefined1 *)(uVar1 + 0x531) = 0;
      FUN_1800777b0(uVar1 + 0x428);
      *(undefined2 *)(uVar1 + 0x532) = 0;
    }
    else if (*(char *)(uVar1 + 0x534) == '\0') {
      uVar4 = *(undefined8 *)(uVar1 + 0x518);
      puVar3 = *(undefined8 **)(uVar1 + 0x520);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar4);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar4,puVar3[1],puVar3[2]);
      }
      FUN_1800777b0(uVar1 + 0x4e8);
      plVar2 = *(longlong **)(uVar1 + 0x4f8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(uVar1 + 0x4f8);
      }
      plVar2 = *(longlong **)(uVar1 + 0x418);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003cc40(uVar1 + 0x418);
        }
      }
    }
    *(undefined1 *)(uVar1 + 0x539) = 0;
    plVar2 = *(longlong **)(uVar1 + 0x280);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cd00(uVar1 + 0x280);
    }
    FUN_1800ac3d0();
    plVar2 = *(longlong **)(uVar1 + 0x288);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003e0f0();
    }
    *(undefined1 *)(uVar1 + 0x53a) = 0;
    plVar2 = *(longlong **)(uVar1 + 0x98);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar6 = *plVar2;
    UNLOCK();
    goto joined_r0x00018007810d;
  case 4:
    *(undefined1 *)(uVar1 + 0x1ad) = 0;
    plVar2 = *(longlong **)(uVar1 + 0x1c8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cd00(uVar1 + 0x1c8);
    }
    FUN_1800ac3d0();
    plVar2 = *(longlong **)(uVar1 + 0x1d0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003e0f0();
    }
    break;
  case 5:
    if (*(char *)(uVar1 + 0x203) == '\0') {
      uVar4 = *(undefined8 *)(uVar1 + 0x1e0);
      puVar3 = *(undefined8 **)(uVar1 + 0x1e8);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar4);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar4,puVar3[1],puVar3[2]);
        plVar2 = *(longlong **)(uVar1 + 0x98);
        LOCK();
        *plVar2 = *plVar2 + -1;
        lVar6 = *plVar2;
        UNLOCK();
        goto joined_r0x00018007810d;
      }
    }
    break;
  case 6:
    FUN_1800ab4e0();
    plVar2 = *(longlong **)(uVar1 + 0x1b0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003de40();
      }
    }
    *(undefined1 *)(uVar1 + 0x1ab) = 0;
    plVar2 = *(longlong **)(uVar1 + 0x180);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cd00(uVar1 + 0x180);
    }
    FUN_1800ac3d0();
    plVar2 = *(longlong **)(uVar1 + 0x188);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003e0f0();
    }
    goto LAB_180078191;
  case 7:
    FUN_1800ab4e0();
    plVar2 = *(longlong **)(uVar1 + 0x1b0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003de40();
      }
    }
    plVar2 = *(longlong **)(uVar1 + 0x1a0);
    lVar6 = *plVar2;
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)plVar2[1];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(lVar6);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(lVar6,puVar3[1],puVar3[2]);
      }
    }
    thunk_FUN_1801d3330(plVar2,0x18,8);
    *(undefined2 *)(uVar1 + 0x1aa) = 0;
    plVar2 = *(longlong **)(uVar1 + 0x180);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cd00(uVar1 + 0x180);
    }
    FUN_1800ac3d0();
    plVar2 = *(longlong **)(uVar1 + 0x188);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003e0f0();
    }
LAB_180078191:
    *(undefined1 *)(uVar1 + 0x1ac) = 0;
  }
  plVar2 = *(longlong **)(uVar1 + 0x98);
  LOCK();
  *plVar2 = *plVar2 + -1;
  lVar6 = *plVar2;
  UNLOCK();
joined_r0x00018007810d:
  if (lVar6 == 0) {
    FUN_18003cc40(uVar1 + 0x98);
  }
  plVar2 = *(longlong **)(uVar1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(uVar1 + 0xa8);
    }
  }
  plVar2 = *(longlong **)(uVar1 + 0x168);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(uVar1 + 0x168);
  }
  plVar2 = *(longlong **)(uVar1 + 0x178);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cf20(uVar1 + 0x178);
    }
  }
  FUN_180079680(uVar1 + 0x130);
LAB_18007823a:
  FUN_18003c220(uVar1 + 0x110);
switchD_180077d26_caseD_1:
  thunk_FUN_1801d3330(uVar1,0x540,8);
  return;
}


