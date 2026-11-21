/* FUN_1800e1650 @ 1800e1650 */

void FUN_1800e1650(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0x1a9)) {
  case 0:
    plVar4 = *(longlong **)(param_1 + 0x98);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(param_1 + 0x98);
    }
    plVar4 = *(longlong **)(param_1 + 0xa8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003cc40(param_1 + 0xa8);
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    puVar5 = *(undefined8 **)(param_1 + 0x100);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar3);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
    }
    plVar4 = *(longlong **)(param_1 + 0x168);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(param_1 + 0x168);
    }
    plVar4 = *(longlong **)(param_1 + 0x178);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003cf20(param_1 + 0x178);
      }
    }
    FUN_180099b90(param_1 + 0x130);
    goto LAB_1800e1c43;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0x538) != '\x03') {
      if (*(char *)(param_1 + 0x538) == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x248);
        puVar5 = *(undefined8 **)(param_1 + 0x250);
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(uVar3);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
        }
        plVar4 = *(longlong **)(param_1 + 0x260);
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_18003cc40(param_1 + 0x260);
        }
        plVar4 = *(longlong **)(param_1 + 0x270);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            FUN_18003cc40(param_1 + 0x270);
          }
        }
      }
      break;
    }
    if (*(char *)(param_1 + 0x534) == '\x03') {
      if (*(char *)(param_1 + 0x410) == '\x03') {
        uVar3 = *(undefined8 *)(param_1 + 0x340);
        puVar5 = *(undefined8 **)(param_1 + 0x348);
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(uVar3);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
        }
        *(undefined1 *)(param_1 + 0x411) = 0;
      }
      else if (*(char *)(param_1 + 0x410) == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0x328);
        puVar5 = *(undefined8 **)(param_1 + 0x330);
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(uVar3);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
        }
      }
      plVar4 = *(longlong **)(param_1 + 0x448);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_18003cc40(param_1 + 0x448);
        }
      }
      *(undefined1 *)(param_1 + 0x530) = 0;
      plVar4 = *(longlong **)(param_1 + 0x438);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003cc40(param_1 + 0x438);
      }
      *(undefined1 *)(param_1 + 0x531) = 0;
      FUN_1800777b0(param_1 + 0x428);
      *(undefined2 *)(param_1 + 0x532) = 0;
    }
    else if (*(char *)(param_1 + 0x534) == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x518);
      puVar5 = *(undefined8 **)(param_1 + 0x520);
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(uVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
      }
      FUN_1800777b0(param_1 + 0x4e8);
      plVar4 = *(longlong **)(param_1 + 0x4f8);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003cc40(param_1 + 0x4f8);
      }
      plVar4 = *(longlong **)(param_1 + 0x418);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_18003cc40(param_1 + 0x418);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x539) = 0;
    plVar4 = *(longlong **)(param_1 + 0x280);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cd00(param_1 + 0x280);
    }
    lVar2 = *(longlong *)(param_1 + 0x288);
    LOCK();
    plVar4 = (longlong *)(lVar2 + 0x1c8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18009c5a0(lVar2 + 0x80);
      FUN_18017a7e0(lVar2 + 0x100);
    }
    plVar4 = *(longlong **)(param_1 + 0x288);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003e0f0();
    }
    *(undefined1 *)(param_1 + 0x53a) = 0;
    plVar4 = *(longlong **)(param_1 + 0x98);
    LOCK();
    *plVar4 = *plVar4 + -1;
    lVar2 = *plVar4;
    UNLOCK();
    goto joined_r0x0001800e1a7f;
  case 4:
    *(undefined1 *)(param_1 + 0x1ad) = 0;
    plVar4 = *(longlong **)(param_1 + 0x1c8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cd00(param_1 + 0x1c8);
    }
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    LOCK();
    plVar4 = (longlong *)(lVar2 + 0x1c8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18009c5a0(lVar2 + 0x80);
      FUN_18017a7e0(lVar2 + 0x100);
    }
    plVar4 = *(longlong **)(param_1 + 0x1d0);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003e0f0();
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x203) == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0x1e0);
      puVar5 = *(undefined8 **)(param_1 + 0x1e8);
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(uVar3);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
        plVar4 = *(longlong **)(param_1 + 0x98);
        LOCK();
        *plVar4 = *plVar4 + -1;
        lVar2 = *plVar4;
        UNLOCK();
        goto joined_r0x0001800e1a7f;
      }
    }
    break;
  case 6:
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    if (lVar2 != 0) {
      uVar6 = *(ulonglong *)(lVar2 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar2 + 0x30);
        bVar7 = uVar6 == uVar1;
        if (bVar7) {
          *(ulonglong *)(lVar2 + 0x30) = uVar6 | 4;
        }
        else {
          uVar6 = uVar1;
        }
        UNLOCK();
      } while (!bVar7);
      if (((uint)uVar6 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(*(undefined8 *)(lVar2 + 0x18));
      }
      if (((uint)uVar6 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
        UNLOCK();
        FUN_180177590(lVar2 + 0x20);
      }
      if ((uVar6 & 2) != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar2 + 0x38) = 0;
        FUN_18003c2f0(uVar3);
      }
      plVar4 = *(longlong **)(param_1 + 0x1b0);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_18003de40();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1ab) = 0;
    plVar4 = *(longlong **)(param_1 + 0x180);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cd00(param_1 + 0x180);
    }
    lVar2 = *(longlong *)(param_1 + 0x188);
    LOCK();
    plVar4 = (longlong *)(lVar2 + 0x1c8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18009c5a0(lVar2 + 0x80);
      FUN_18017a7e0(lVar2 + 0x100);
    }
    plVar4 = *(longlong **)(param_1 + 0x188);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003e0f0();
    }
    goto LAB_1800e1b9a;
  case 7:
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    if (lVar2 != 0) {
      uVar6 = *(ulonglong *)(lVar2 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar2 + 0x30);
        bVar7 = uVar6 == uVar1;
        if (bVar7) {
          *(ulonglong *)(lVar2 + 0x30) = uVar6 | 4;
        }
        else {
          uVar6 = uVar1;
        }
        UNLOCK();
      } while (!bVar7);
      if (((uint)uVar6 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(*(undefined8 *)(lVar2 + 0x18));
      }
      if (((uint)uVar6 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
        UNLOCK();
        FUN_180177590(lVar2 + 0x20);
      }
      if ((uVar6 & 2) != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar2 + 0x38) = 0;
        FUN_18003c2f0(uVar3);
      }
      plVar4 = *(longlong **)(param_1 + 0x1b0);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_18003de40();
        }
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x1a0);
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)plVar4[1];
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(lVar2);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_1801d3330(lVar2,puVar5[1],puVar5[2]);
      }
    }
    thunk_FUN_1801d3330(plVar4,0x18,8);
    *(undefined2 *)(param_1 + 0x1aa) = 0;
    plVar4 = *(longlong **)(param_1 + 0x180);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cd00(param_1 + 0x180);
    }
    lVar2 = *(longlong *)(param_1 + 0x188);
    LOCK();
    plVar4 = (longlong *)(lVar2 + 0x1c8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18009c5a0(lVar2 + 0x80);
      FUN_18017a7e0(lVar2 + 0x100);
    }
    plVar4 = *(longlong **)(param_1 + 0x188);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003e0f0();
    }
LAB_1800e1b9a:
    *(undefined1 *)(param_1 + 0x1ac) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  LOCK();
  *plVar4 = *plVar4 + -1;
  lVar2 = *plVar4;
  UNLOCK();
joined_r0x0001800e1a7f:
  if (lVar2 == 0) {
    FUN_18003cc40(param_1 + 0x98);
  }
  plVar4 = *(longlong **)(param_1 + 0xa8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(param_1 + 0xa8);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x168);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_18003cc40(param_1 + 0x168);
  }
  plVar4 = *(longlong **)(param_1 + 0x178);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cf20(param_1 + 0x178);
    }
  }
  FUN_180099b90(param_1 + 0x130);
LAB_1800e1c43:
  FUN_18003c220(param_1 + 0x110);
  return;
}


