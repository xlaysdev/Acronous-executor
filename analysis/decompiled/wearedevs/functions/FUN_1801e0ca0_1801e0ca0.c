/* FUN_1801e0ca0 @ 1801e0ca0 */

undefined8 FUN_1801e0ca0(undefined1 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_1802fd838;
  LOCK();
  DAT_1802fd838 = DAT_1802fd838 + 1;
  UNLOCK();
  if (DAT_1802fd838 == 0 || lVar2 < -1) {
    return 0;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar3 = CONCAT71((uint7)(uint3)(_tls_index >> 8),1);
  if (*(char *)(lVar2 + 0x150) == '\0') {
    plVar1 = (longlong *)(lVar2 + 0x148);
    *plVar1 = *plVar1 + 1;
    *(undefined1 *)(lVar2 + 0x150) = param_1;
    uVar3 = CONCAT71((int7)((ulonglong)plVar1 >> 8),2);
  }
  return uVar3;
}


