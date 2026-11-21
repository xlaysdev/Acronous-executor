/* FUN_180168910 @ 180168910 */

undefined ** FUN_180168910(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar4 = (undefined8 *)(lVar1 + 0x60);
  if (*(char *)(lVar1 + 0x68) != '\x01') {
    plVar5 = (longlong *)0x0;
    puVar4 = (undefined8 *)FUN_1801fb130(puVar4,0);
    if (puVar4 == (undefined8 *)0x0) goto LAB_180168941;
  }
  plVar5 = (longlong *)*puVar4;
  LOCK();
  lVar1 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 == 0 || SCARRY8(lVar1,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_180168941:
  ppuVar3 = &PTR_LAB_180260cb0;
  if (plVar5 == (longlong *)0x0) {
    ppuVar3 = (undefined **)0x0;
  }
  return ppuVar3;
}


