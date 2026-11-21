/* FUN_180097a00 @ 180097a00 */

void FUN_180097a00(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = *param_1;
  if (uVar2 == 5) {
    if ((char)param_1[0xf] != '\x02') {
      if ((char)param_1[0xf] == '\x03') {
        return;
      }
code_r0x000180097bd4:
      FUN_1800999e0();
      return;
    }
LAB_180097bc7:
    FUN_18009acf0(param_1 + 1);
    return;
  }
  lVar6 = 0;
  if (1 < uVar2) {
    lVar6 = uVar2 - 2;
  }
  if (lVar6 != 1) {
    if (lVar6 != 0) {
      return;
    }
    if ((int)uVar2 == 2) {
      return;
    }
    if ((int)param_1[0x2a] != 5) {
      FUN_180097490(param_1 + 0x2a);
    }
    FUN_180099f40(param_1);
    return;
  }
  cVar1 = (char)param_1[0xf];
  if (cVar1 == '\x02') goto LAB_180097bc7;
  if (cVar1 == '\x03') {
    return;
  }
  if (cVar1 != '\x04') goto code_r0x000180097bd4;
  uVar2 = param_1[1];
  switch(*(undefined1 *)(uVar2 + 0x1a9)) {
  case 0:
    plVar3 = *(longlong **)(uVar2 + 0x98);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(uVar2 + 0x98);
    }
    plVar3 = *(longlong **)(uVar2 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cc40(uVar2 + 0xa8);
      }
    }
    uVar5 = *(undefined8 *)(uVar2 + 0xf8);
    puVar4 = *(undefined8 **)(uVar2 + 0x100);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar5);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
    }
    plVar3 = *(longlong **)(uVar2 + 0x168);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(uVar2 + 0x168);
    }
    plVar3 = *(longlong **)(uVar2 + 0x178);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cf20(uVar2 + 0x178);
      }
    }
    FUN_180099b90(uVar2 + 0x130);
    goto LAB_180097f62;
  default:
    goto switchD_180097ad8_caseD_1;
  case 3:
    if (*(char *)(uVar2 + 0x538) != '\x03') {
      if (*(char *)(uVar2 + 0x538) == '\0') {
        uVar5 = *(undefined8 *)(uVar2 + 0x248);
        puVar4 = *(undefined8 **)(uVar2 + 0x250);
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(uVar5);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
        }
        plVar3 = *(longlong **)(uVar2 + 0x260);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18003cc40(uVar2 + 0x260);
        }
        plVar3 = *(longlong **)(uVar2 + 0x270);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            FUN_18003cc40(uVar2 + 0x270);
          }
        }
      }
      break;
    }
    if (*(char *)(uVar2 + 0x534) == '\x03') {
      if (*(char *)(uVar2 + 0x410) == '\x03') {
        uVar5 = *(undefined8 *)(uVar2 + 0x340);
        puVar4 = *(undefined8 **)(uVar2 + 0x348);
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(uVar5);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
        }
        *(undefined1 *)(uVar2 + 0x411) = 0;
      }
      else if (*(char *)(uVar2 + 0x410) == '\0') {
        uVar5 = *(undefined8 *)(uVar2 + 0x328);
        puVar4 = *(undefined8 **)(uVar2 + 0x330);
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(uVar5);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
        }
      }
      plVar3 = *(longlong **)(uVar2 + 0x448);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18003cc40(uVar2 + 0x448);
        }
      }
      *(undefined1 *)(uVar2 + 0x530) = 0;
      plVar3 = *(longlong **)(uVar2 + 0x438);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cc40(uVar2 + 0x438);
      }
      *(undefined1 *)(uVar2 + 0x531) = 0;
      FUN_1800777b0(uVar2 + 0x428);
      *(undefined2 *)(uVar2 + 0x532) = 0;
    }
    else if (*(char *)(uVar2 + 0x534) == '\0') {
      uVar5 = *(undefined8 *)(uVar2 + 0x518);
      puVar4 = *(undefined8 **)(uVar2 + 0x520);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(uVar5);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
      }
      FUN_1800777b0(uVar2 + 0x4e8);
      plVar3 = *(longlong **)(uVar2 + 0x4f8);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cc40(uVar2 + 0x4f8);
      }
      plVar3 = *(longlong **)(uVar2 + 0x418);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18003cc40(uVar2 + 0x418);
        }
      }
    }
    *(undefined1 *)(uVar2 + 0x539) = 0;
    plVar3 = *(longlong **)(uVar2 + 0x280);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cd00(uVar2 + 0x280);
    }
    FUN_1800ac3d0();
    plVar3 = *(longlong **)(uVar2 + 0x288);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003e0f0();
    }
    *(undefined1 *)(uVar2 + 0x53a) = 0;
    plVar3 = *(longlong **)(uVar2 + 0x98);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar6 = *plVar3;
    UNLOCK();
    goto joined_r0x000180097e35;
  case 4:
    *(undefined1 *)(uVar2 + 0x1ad) = 0;
    plVar3 = *(longlong **)(uVar2 + 0x1c8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cd00(uVar2 + 0x1c8);
    }
    FUN_1800ac3d0();
    plVar3 = *(longlong **)(uVar2 + 0x1d0);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003e0f0();
    }
    break;
  case 5:
    if (*(char *)(uVar2 + 0x203) == '\0') {
      uVar5 = *(undefined8 *)(uVar2 + 0x1e0);
      puVar4 = *(undefined8 **)(uVar2 + 0x1e8);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(uVar5);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
        plVar3 = *(longlong **)(uVar2 + 0x98);
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar6 = *plVar3;
        UNLOCK();
        goto joined_r0x000180097e35;
      }
    }
    break;
  case 6:
    FUN_1800ab4e0();
    plVar3 = *(longlong **)(uVar2 + 0x1b0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003de40();
      }
    }
    *(undefined1 *)(uVar2 + 0x1ab) = 0;
    plVar3 = *(longlong **)(uVar2 + 0x180);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cd00(uVar2 + 0x180);
    }
    FUN_1800ac3d0();
    plVar3 = *(longlong **)(uVar2 + 0x188);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003e0f0();
    }
    goto LAB_180097eb9;
  case 7:
    FUN_1800ab4e0();
    plVar3 = *(longlong **)(uVar2 + 0x1b0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003de40();
      }
    }
    plVar3 = *(longlong **)(uVar2 + 0x1a0);
    lVar6 = *plVar3;
    if (lVar6 != 0) {
      puVar4 = (undefined8 *)plVar3[1];
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar6);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_1801d3330(lVar6,puVar4[1],puVar4[2]);
      }
    }
    thunk_FUN_1801d3330(plVar3,0x18,8);
    *(undefined2 *)(uVar2 + 0x1aa) = 0;
    plVar3 = *(longlong **)(uVar2 + 0x180);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cd00(uVar2 + 0x180);
    }
    FUN_1800ac3d0();
    plVar3 = *(longlong **)(uVar2 + 0x188);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003e0f0();
    }
LAB_180097eb9:
    *(undefined1 *)(uVar2 + 0x1ac) = 0;
  }
  plVar3 = *(longlong **)(uVar2 + 0x98);
  LOCK();
  *plVar3 = *plVar3 + -1;
  lVar6 = *plVar3;
  UNLOCK();
joined_r0x000180097e35:
  if (lVar6 == 0) {
    FUN_18003cc40(uVar2 + 0x98);
  }
  plVar3 = *(longlong **)(uVar2 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(uVar2 + 0xa8);
    }
  }
  plVar3 = *(longlong **)(uVar2 + 0x168);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(uVar2 + 0x168);
  }
  plVar3 = *(longlong **)(uVar2 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cf20(uVar2 + 0x178);
    }
  }
  FUN_180099b90(uVar2 + 0x130);
LAB_180097f62:
  FUN_18003c220(uVar2 + 0x110);
switchD_180097ad8_caseD_1:
  thunk_FUN_1801d3330(uVar2,0x540,8);
  return;
}


