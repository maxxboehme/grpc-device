//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Compilation test for the NI-FPGA Metadata
//---------------------------------------------------------------------
#include "nifpga_library.h"

namespace nifpga_grpc {

NiFpga_Status Abort(NiFpga_Session session)
{
  return NiFpga_Abort(session);
}

NiFpga_Status AcknowledgeIrqs(NiFpga_Session session, uint32_t irqs)
{
  return NiFpga_AcknowledgeIrqs(session, irqs);
}

NiFpga_Status Close(NiFpga_Session session, uint32_t attribute)
{
  return NiFpga_Close(session, attribute);
}

NiFpga_Status CommitFifoConfiguration(NiFpga_Session session, uint32_t fifo)
{
  return NiFpga_CommitFifoConfiguration(session, fifo);
}

NiFpga_Status ConfigureFifo(NiFpga_Session session, uint32_t fifo, size_t depth)
{
  return NiFpga_ConfigureFifo(session, fifo, depth);
}

NiFpga_Status ConfigureFifo2(NiFpga_Session session, uint32_t fifo, size_t requestedDepth, size_t* actualDepth)
{
  return NiFpga_ConfigureFifo2(session, fifo, requestedDepth, actualDepth);
}

NiFpga_Status Download(NiFpga_Session session)
{
  return NiFpga_Download(session);
}

NiFpga_Status FindFifo(NiFpga_Session session, char fifoName[], uint32_t* fifoNumber)
{
  return NiFpga_FindFifo(session, fifoName, fifoNumber);
}

NiFpga_Status FindRegister(NiFpga_Session session, char registerName[], uint32_t* registerOffset)
{
  return NiFpga_FindRegister(session, registerName, registerOffset);
}

NiFpga_Status GetBitfileSignature(NiFpga_Session session, uint32_t* signature, size_t* signatureSize)
{
  return NiFpga_GetBitfileSignature(session, signature, signatureSize);
}

NiFpga_Status GetFifoPropertyI32(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, int32_t* value)
{
  return NiFpga_GetFifoPropertyI32(session, fifo, property, value);
}

NiFpga_Status GetFifoPropertyI64(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, int64_t* value)
{
  return NiFpga_GetFifoPropertyI64(session, fifo, property, value);
}

NiFpga_Status GetFifoPropertyU32(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, uint32_t* value)
{
  return NiFpga_GetFifoPropertyU32(session, fifo, property, value);
}

NiFpga_Status GetFifoPropertyU64(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, uint64_t* value)
{
  return NiFpga_GetFifoPropertyU64(session, fifo, property, value);
}

NiFpga_Status GetFpgaViState(NiFpga_Session session, uint32_t* state)
{
  return NiFpga_GetFpgaViState(session, state);
}

NiFpga_Status Open(char bitfile[], char signature[], char resource[], uint32_t attribute, NiFpga_Session* session)
{
  return NiFpga_Open(bitfile, signature, resource, attribute, session);
}

NiFpga_Status ReadArrayBool(NiFpga_Session session, uint32_t indicator, NiFpga_Bool array[], size_t size)
{
  return NiFpga_ReadArrayBool(session, indicator, array, size);
}

NiFpga_Status ReadArrayDbl(NiFpga_Session session, uint32_t indicator, double array[], size_t size)
{
  return NiFpga_ReadArrayDbl(session, indicator, array, size);
}

NiFpga_Status ReadArrayI16(NiFpga_Session session, uint32_t indicator, int16_t array[], size_t size)
{
  return NiFpga_ReadArrayI16(session, indicator, array, size);
}

NiFpga_Status ReadArrayI32(NiFpga_Session session, uint32_t indicator, int32_t array[], size_t size)
{
  return NiFpga_ReadArrayI32(session, indicator, array, size);
}

NiFpga_Status ReadArrayI64(NiFpga_Session session, uint32_t indicator, int64_t array[], size_t size)
{
  return NiFpga_ReadArrayI64(session, indicator, array, size);
}

NiFpga_Status ReadArrayI8(NiFpga_Session session, uint32_t indicator, int8_t array[], size_t size)
{
  return NiFpga_ReadArrayI8(session, indicator, array, size);
}

NiFpga_Status ReadArraySgl(NiFpga_Session session, uint32_t indicator, float array[], size_t size)
{
  return NiFpga_ReadArraySgl(session, indicator, array, size);
}

NiFpga_Status ReadArrayU16(NiFpga_Session session, uint32_t indicator, uint16_t array[], size_t size)
{
  return NiFpga_ReadArrayU16(session, indicator, array, size);
}

NiFpga_Status ReadArrayU32(NiFpga_Session session, uint32_t indicator, uint32_t array[], size_t size)
{
  return NiFpga_ReadArrayU32(session, indicator, array, size);
}

NiFpga_Status ReadArrayU64(NiFpga_Session session, uint32_t indicator, uint64_t array[], size_t size)
{
  return NiFpga_ReadArrayU64(session, indicator, array, size);
}

NiFpga_Status ReadArrayU8(NiFpga_Session session, uint32_t indicator, uint8_t array[], size_t size)
{
  return NiFpga_ReadArrayU8(session, indicator, array, size);
}

NiFpga_Status ReadBool(NiFpga_Session session, uint32_t indicator, NiFpga_Bool* value)
{
  return NiFpga_ReadBool(session, indicator, value);
}

NiFpga_Status ReadDbl(NiFpga_Session session, uint32_t indicator, double* value)
{
  return NiFpga_ReadDbl(session, indicator, value);
}

NiFpga_Status ReadFifoBool(NiFpga_Session session, uint32_t fifo, NiFpga_Bool data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoBool(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoDbl(NiFpga_Session session, uint32_t fifo, double data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoDbl(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoI16(NiFpga_Session session, uint32_t fifo, int16_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoI16(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoI32(NiFpga_Session session, uint32_t fifo, int32_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoI32(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoI64(NiFpga_Session session, uint32_t fifo, int64_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoI64(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoI8(NiFpga_Session session, uint32_t fifo, int8_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoI8(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoSgl(NiFpga_Session session, uint32_t fifo, float data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoSgl(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoU16(NiFpga_Session session, uint32_t fifo, uint16_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoU16(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoU32(NiFpga_Session session, uint32_t fifo, uint32_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoU32(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoU64(NiFpga_Session session, uint32_t fifo, uint64_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoU64(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadFifoU8(NiFpga_Session session, uint32_t fifo, uint8_t data[], size_t numberOfElements, uint32_t timeout, size_t* elementsRemaining)
{
  return NiFpga_ReadFifoU8(session, fifo, data, numberOfElements, timeout, elementsRemaining);
}

NiFpga_Status ReadI16(NiFpga_Session session, uint32_t indicator, int16_t* value)
{
  return NiFpga_ReadI16(session, indicator, value);
}

NiFpga_Status ReadI32(NiFpga_Session session, uint32_t indicator, int32_t* value)
{
  return NiFpga_ReadI32(session, indicator, value);
}

NiFpga_Status ReadI64(NiFpga_Session session, uint32_t indicator, int64_t* value)
{
  return NiFpga_ReadI64(session, indicator, value);
}

NiFpga_Status ReadI8(NiFpga_Session session, uint32_t indicator, int8_t* value)
{
  return NiFpga_ReadI8(session, indicator, value);
}

NiFpga_Status ReadSgl(NiFpga_Session session, uint32_t indicator, float* value)
{
  return NiFpga_ReadSgl(session, indicator, value);
}

NiFpga_Status ReadU16(NiFpga_Session session, uint32_t indicator, uint16_t* value)
{
  return NiFpga_ReadU16(session, indicator, value);
}

NiFpga_Status ReadU32(NiFpga_Session session, uint32_t indicator, uint32_t* value)
{
  return NiFpga_ReadU32(session, indicator, value);
}

NiFpga_Status ReadU64(NiFpga_Session session, uint32_t indicator, uint64_t* value)
{
  return NiFpga_ReadU64(session, indicator, value);
}

NiFpga_Status ReadU8(NiFpga_Session session, uint32_t indicator, uint8_t* value)
{
  return NiFpga_ReadU8(session, indicator, value);
}

NiFpga_Status ReleaseFifoElements(NiFpga_Session session, uint32_t fifo, size_t elements)
{
  return NiFpga_ReleaseFifoElements(session, fifo, elements);
}

NiFpga_Status Reset(NiFpga_Session session)
{
  return NiFpga_Reset(session);
}

NiFpga_Status Run(NiFpga_Session session, uint32_t attribute)
{
  return NiFpga_Run(session, attribute);
}

NiFpga_Status SetFifoPropertyI32(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, int32_t value)
{
  return NiFpga_SetFifoPropertyI32(session, fifo, property, value);
}

NiFpga_Status SetFifoPropertyI64(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, int64_t value)
{
  return NiFpga_SetFifoPropertyI64(session, fifo, property, value);
}

NiFpga_Status SetFifoPropertyU32(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, uint32_t value)
{
  return NiFpga_SetFifoPropertyU32(session, fifo, property, value);
}

NiFpga_Status SetFifoPropertyU64(NiFpga_Session session, uint32_t fifo, NiFpga_FifoProperty property, uint64_t value)
{
  return NiFpga_SetFifoPropertyU64(session, fifo, property, value);
}

NiFpga_Status StartFifo(NiFpga_Session session, uint32_t fifo)
{
  return NiFpga_StartFifo(session, fifo);
}

NiFpga_Status StopFifo(NiFpga_Session session, uint32_t fifo)
{
  return NiFpga_StopFifo(session, fifo);
}

NiFpga_Status UnreserveFifo(NiFpga_Session session, uint32_t fifo)
{
  return NiFpga_UnreserveFifo(session, fifo);
}

NiFpga_Status WaitOnIrqs(NiFpga_Session session, NiFpga_IrqContext* irqContext, uint32_t irqs, uint32_t timeout, uint32_t* irqsAsserted, NiFpga_Bool* timedOut)
{
  return NiFpga_WaitOnIrqs(session, irqContext, irqs, timeout, irqsAsserted, timedOut);
}

NiFpga_Status WriteArrayBool(NiFpga_Session session, uint32_t control, NiFpga_Bool array[], size_t size)
{
  return NiFpga_WriteArrayBool(session, control, array, size);
}

NiFpga_Status WriteArrayDbl(NiFpga_Session session, uint32_t control, double array[], size_t size)
{
  return NiFpga_WriteArrayDbl(session, control, array, size);
}

NiFpga_Status WriteArrayI16(NiFpga_Session session, uint32_t control, int16_t array[], size_t size)
{
  return NiFpga_WriteArrayI16(session, control, array, size);
}

NiFpga_Status WriteArrayI32(NiFpga_Session session, uint32_t control, int32_t array[], size_t size)
{
  return NiFpga_WriteArrayI32(session, control, array, size);
}

NiFpga_Status WriteArrayI64(NiFpga_Session session, uint32_t control, int64_t array[], size_t size)
{
  return NiFpga_WriteArrayI64(session, control, array, size);
}

NiFpga_Status WriteArrayI8(NiFpga_Session session, uint32_t control, int8_t array[], size_t size)
{
  return NiFpga_WriteArrayI8(session, control, array, size);
}

NiFpga_Status WriteArraySgl(NiFpga_Session session, uint32_t control, float array[], size_t size)
{
  return NiFpga_WriteArraySgl(session, control, array, size);
}

NiFpga_Status WriteArrayU16(NiFpga_Session session, uint32_t control, uint16_t array[], size_t size)
{
  return NiFpga_WriteArrayU16(session, control, array, size);
}

NiFpga_Status WriteArrayU32(NiFpga_Session session, uint32_t control, uint32_t array[], size_t size)
{
  return NiFpga_WriteArrayU32(session, control, array, size);
}

NiFpga_Status WriteArrayU64(NiFpga_Session session, uint32_t control, uint64_t array[], size_t size)
{
  return NiFpga_WriteArrayU64(session, control, array, size);
}

NiFpga_Status WriteArrayU8(NiFpga_Session session, uint32_t control, uint8_t array[], size_t size)
{
  return NiFpga_WriteArrayU8(session, control, array, size);
}

NiFpga_Status WriteBool(NiFpga_Session session, uint32_t control, NiFpga_Bool value)
{
  return NiFpga_WriteBool(session, control, value);
}

NiFpga_Status WriteDbl(NiFpga_Session session, uint32_t control, double value)
{
  return NiFpga_WriteDbl(session, control, value);
}

NiFpga_Status WriteFifoBool(NiFpga_Session session, uint32_t fifo, NiFpga_Bool data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoBool(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoDbl(NiFpga_Session session, uint32_t fifo, double data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoDbl(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoI16(NiFpga_Session session, uint32_t fifo, int16_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoI16(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoI32(NiFpga_Session session, uint32_t fifo, int32_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoI32(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoI64(NiFpga_Session session, uint32_t fifo, int64_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoI64(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoI8(NiFpga_Session session, uint32_t fifo, int8_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoI8(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoSgl(NiFpga_Session session, uint32_t fifo, float data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoSgl(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoU16(NiFpga_Session session, uint32_t fifo, uint16_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoU16(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoU32(NiFpga_Session session, uint32_t fifo, uint32_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoU32(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoU64(NiFpga_Session session, uint32_t fifo, uint64_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoU64(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteFifoU8(NiFpga_Session session, uint32_t fifo, uint8_t data[], size_t numberOfElements, uint32_t timeout, size_t* emptyElementsRemaining)
{
  return NiFpga_WriteFifoU8(session, fifo, data, numberOfElements, timeout, emptyElementsRemaining);
}

NiFpga_Status WriteI16(NiFpga_Session session, uint32_t control, int16_t value)
{
  return NiFpga_WriteI16(session, control, value);
}

NiFpga_Status WriteI32(NiFpga_Session session, uint32_t control, int32_t value)
{
  return NiFpga_WriteI32(session, control, value);
}

NiFpga_Status WriteI64(NiFpga_Session session, uint32_t control, int64_t value)
{
  return NiFpga_WriteI64(session, control, value);
}

NiFpga_Status WriteI8(NiFpga_Session session, uint32_t control, int8_t value)
{
  return NiFpga_WriteI8(session, control, value);
}

NiFpga_Status WriteSgl(NiFpga_Session session, uint32_t control, float value)
{
  return NiFpga_WriteSgl(session, control, value);
}

NiFpga_Status WriteU16(NiFpga_Session session, uint32_t control, uint16_t value)
{
  return NiFpga_WriteU16(session, control, value);
}

NiFpga_Status WriteU32(NiFpga_Session session, uint32_t control, uint32_t value)
{
  return NiFpga_WriteU32(session, control, value);
}

NiFpga_Status WriteU64(NiFpga_Session session, uint32_t control, uint64_t value)
{
  return NiFpga_WriteU64(session, control, value);
}

NiFpga_Status WriteU8(NiFpga_Session session, uint32_t control, uint8_t value)
{
  return NiFpga_WriteU8(session, control, value);
}

}  // namespace nifpga_grpc
