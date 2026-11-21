/* FUN_18016fa90 @ 18016fa90 */

void FUN_18016fa90(longlong *param_1,ulonglong param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  *(undefined1 *)(param_1 + 6) = 1;
  puVar5 = PTR_DAT_1802fd600;
  uVar9 = param_2 + param_1[4] + 1;
  if (param_2 < uVar9) {
LAB_18016fad7:
    do {
      pcVar1 = (char *)(*param_1 + (param_1[4] & param_2) * 0x18);
      pcVar2 = (char *)(*param_1 + (param_1[4] & param_2) * 0x18);
      LOCK();
      bVar10 = *pcVar2 == '\0';
      if (bVar10) {
        *pcVar2 = '\x01';
      }
      UNLOCK();
      if (bVar10) {
        if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) == 0) goto LAB_18016fb06;
LAB_18016fbbb:
        bVar6 = FUN_180200a50();
        bVar6 = bVar6 ^ 1;
        lVar3 = *(longlong *)(pcVar1 + 0x10);
      }
      else {
        FUN_180200390(pcVar1);
        if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0) goto LAB_18016fbbb;
LAB_18016fb06:
        bVar6 = 0;
        lVar3 = *(longlong *)(pcVar1 + 0x10);
      }
      if (lVar3 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38);
        lVar4 = *(longlong *)(lVar3 + lVar8);
        *(longlong *)(pcVar1 + 0x10) = lVar4;
        if (lVar4 == 0) {
          pcVar1[8] = '\0';
          pcVar1[9] = '\0';
          pcVar1[10] = '\0';
          pcVar1[0xb] = '\0';
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
        }
        else {
          *(undefined8 *)(lVar4 + 8 + *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x38)) = 0;
          lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38);
        }
        *(undefined8 *)(lVar3 + lVar8) = 0;
        *(undefined8 *)(lVar3 + 8 + *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38)) = 0;
        LOCK();
        param_1[3] = param_1[3] + -1;
        UNLOCK();
      }
      if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
        pcVar1[1] = '\x01';
      }
      LOCK();
      cVar7 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      if (cVar7 == '\x02') {
        WakeByAddressSingle(pcVar1);
      }
      if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x30))();
        goto LAB_18016fad7;
      }
      param_2 = param_2 + 1;
    } while (param_2 != uVar9);
  }
  return;
}


