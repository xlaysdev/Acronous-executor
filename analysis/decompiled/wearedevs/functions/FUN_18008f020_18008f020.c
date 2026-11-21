/* FUN_18008f020 @ 18008f020 */

void FUN_18008f020(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != '\0') {
    if (*param_1 == '\x01') {
      FUN_1801162a0();
      plVar3 = *(longlong **)(param_1 + 0x18);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cd00();
      }
      FUN_1800ab890();
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180114080();
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      LOCK();
      *(undefined1 *)(lVar4 + 0xa8) = 1;
      UNLOCK();
      LOCK();
      cVar1 = *(char *)(lVar4 + 0x88);
      *(char *)(lVar4 + 0x88) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(lVar4 + 0x78);
        *(undefined8 *)(lVar4 + 0x78) = 0;
        LOCK();
        *(undefined1 *)(lVar4 + 0x88) = 0;
        UNLOCK();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x80));
        }
      }
      LOCK();
      cVar1 = *(char *)(lVar4 + 0xa0);
      *(char *)(lVar4 + 0xa0) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(lVar4 + 0x90);
        *(undefined8 *)(lVar4 + 0x90) = 0;
        LOCK();
        uVar2 = *(undefined1 *)(lVar4 + 0xa0);
        *(undefined1 *)(lVar4 + 0xa0) = 0;
        UNLOCK();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x98),uVar2);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x20);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180113b80();
        return;
      }
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180114260(param_1 + 0x10);
        }
      }
      FUN_18013bd90();
      FUN_18013c270(param_1 + 0x18);
      plVar3 = *(longlong **)(param_1 + 0x18);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18013bc70();
        return;
      }
    }
  }
  return;
}


