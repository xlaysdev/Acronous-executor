/* FUN_18003bcc0 @ 18003bcc0 */

void FUN_18003bcc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  plVar4 = (longlong *)param_1[3];
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_18003dbb0(param_1 + 3);
  }
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 8);
    plVar4 = param_1;
    do {
      if (puVar2[-1] != 0) {
        thunk_FUN_1801d3330(*puVar2,puVar2[-1],1,param_4,plVar4,uVar5);
      }
      puVar2 = puVar2 + 0xb;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 * 0x58,8);
  return;
}


