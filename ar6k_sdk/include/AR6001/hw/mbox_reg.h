// ------------------------------------------------------------------
// Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation;
//
// Software distributed under the License is distributed on an "AS
// IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
// implied. See the License for the specific language governing
// rights and limitations under the License.
//
//
// ------------------------------------------------------------------
//===================================================================
// Author(s): ="Atheros"
//===================================================================

#ifndef _MBOX_REG_H_
#define _MBOX_REG_H_

#define MBOX_FIFO_ADDRESS                        0x0c014000
#define MBOX_FIFO_OFFSET                         0x00000000
#define MBOX_FIFO_DATA_MSB                       19
#define MBOX_FIFO_DATA_LSB                       0
#define MBOX_FIFO_DATA_MASK                      0x000fffff
#define MBOX_FIFO_DATA_GET(x)                    (((x) & MBOX_FIFO_DATA_MASK) >> MBOX_FIFO_DATA_LSB)
#define MBOX_FIFO_DATA_SET(x)                    (((x) << MBOX_FIFO_DATA_LSB) & MBOX_FIFO_DATA_MASK)

#define MBOX_FIFO_STATUS_ADDRESS                 0x0c014010
#define MBOX_FIFO_STATUS_OFFSET                  0x00000010
#define MBOX_FIFO_STATUS_EMPTY_MSB               19
#define MBOX_FIFO_STATUS_EMPTY_LSB               16
#define MBOX_FIFO_STATUS_EMPTY_MASK              0x000f0000
#define MBOX_FIFO_STATUS_EMPTY_GET(x)            (((x) & MBOX_FIFO_STATUS_EMPTY_MASK) >> MBOX_FIFO_STATUS_EMPTY_LSB)
#define MBOX_FIFO_STATUS_EMPTY_SET(x)            (((x) << MBOX_FIFO_STATUS_EMPTY_LSB) & MBOX_FIFO_STATUS_EMPTY_MASK)
#define MBOX_FIFO_STATUS_FULL_MSB                15
#define MBOX_FIFO_STATUS_FULL_LSB                12
#define MBOX_FIFO_STATUS_FULL_MASK               0x0000f000
#define MBOX_FIFO_STATUS_FULL_GET(x)             (((x) & MBOX_FIFO_STATUS_FULL_MASK) >> MBOX_FIFO_STATUS_FULL_LSB)
#define MBOX_FIFO_STATUS_FULL_SET(x)             (((x) << MBOX_FIFO_STATUS_FULL_LSB) & MBOX_FIFO_STATUS_FULL_MASK)

#define MBOX_DMA_POLICY_ADDRESS                  0x0c014014
#define MBOX_DMA_POLICY_OFFSET                   0x00000014
#define MBOX_DMA_POLICY_TX_QUANTUM_MSB           3
#define MBOX_DMA_POLICY_TX_QUANTUM_LSB           3
#define MBOX_DMA_POLICY_TX_QUANTUM_MASK          0x00000008
#define MBOX_DMA_POLICY_TX_QUANTUM_GET(x)        (((x) & MBOX_DMA_POLICY_TX_QUANTUM_MASK) >> MBOX_DMA_POLICY_TX_QUANTUM_LSB)
#define MBOX_DMA_POLICY_TX_QUANTUM_SET(x)        (((x) << MBOX_DMA_POLICY_TX_QUANTUM_LSB) & MBOX_DMA_POLICY_TX_QUANTUM_MASK)
#define MBOX_DMA_POLICY_TX_ORDER_MSB             2
#define MBOX_DMA_POLICY_TX_ORDER_LSB             2
#define MBOX_DMA_POLICY_TX_ORDER_MASK            0x00000004
#define MBOX_DMA_POLICY_TX_ORDER_GET(x)          (((x) & MBOX_DMA_POLICY_TX_ORDER_MASK) >> MBOX_DMA_POLICY_TX_ORDER_LSB)
#define MBOX_DMA_POLICY_TX_ORDER_SET(x)          (((x) << MBOX_DMA_POLICY_TX_ORDER_LSB) & MBOX_DMA_POLICY_TX_ORDER_MASK)
#define MBOX_DMA_POLICY_RX_QUANTUM_MSB           1
#define MBOX_DMA_POLICY_RX_QUANTUM_LSB           1
#define MBOX_DMA_POLICY_RX_QUANTUM_MASK          0x00000002
#define MBOX_DMA_POLICY_RX_QUANTUM_GET(x)        (((x) & MBOX_DMA_POLICY_RX_QUANTUM_MASK) >> MBOX_DMA_POLICY_RX_QUANTUM_LSB)
#define MBOX_DMA_POLICY_RX_QUANTUM_SET(x)        (((x) << MBOX_DMA_POLICY_RX_QUANTUM_LSB) & MBOX_DMA_POLICY_RX_QUANTUM_MASK)
#define MBOX_DMA_POLICY_RX_ORDER_MSB             0
#define MBOX_DMA_POLICY_RX_ORDER_LSB             0
#define MBOX_DMA_POLICY_RX_ORDER_MASK            0x00000001
#define MBOX_DMA_POLICY_RX_ORDER_GET(x)          (((x) & MBOX_DMA_POLICY_RX_ORDER_MASK) >> MBOX_DMA_POLICY_RX_ORDER_LSB)
#define MBOX_DMA_POLICY_RX_ORDER_SET(x)          (((x) << MBOX_DMA_POLICY_RX_ORDER_LSB) & MBOX_DMA_POLICY_RX_ORDER_MASK)

#define MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS     0x0c014018
#define MBOX0_DMA_RX_DESCRIPTOR_BASE_OFFSET      0x00000018
#define MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX0_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX0_DMA_RX_CONTROL_ADDRESS             0x0c01401c
#define MBOX0_DMA_RX_CONTROL_OFFSET              0x0000001c
#define MBOX0_DMA_RX_CONTROL_RESUME_MSB          2
#define MBOX0_DMA_RX_CONTROL_RESUME_LSB          2
#define MBOX0_DMA_RX_CONTROL_RESUME_MASK         0x00000004
#define MBOX0_DMA_RX_CONTROL_RESUME_GET(x)       (((x) & MBOX0_DMA_RX_CONTROL_RESUME_MASK) >> MBOX0_DMA_RX_CONTROL_RESUME_LSB)
#define MBOX0_DMA_RX_CONTROL_RESUME_SET(x)       (((x) << MBOX0_DMA_RX_CONTROL_RESUME_LSB) & MBOX0_DMA_RX_CONTROL_RESUME_MASK)
#define MBOX0_DMA_RX_CONTROL_START_MSB           1
#define MBOX0_DMA_RX_CONTROL_START_LSB           1
#define MBOX0_DMA_RX_CONTROL_START_MASK          0x00000002
#define MBOX0_DMA_RX_CONTROL_START_GET(x)        (((x) & MBOX0_DMA_RX_CONTROL_START_MASK) >> MBOX0_DMA_RX_CONTROL_START_LSB)
#define MBOX0_DMA_RX_CONTROL_START_SET(x)        (((x) << MBOX0_DMA_RX_CONTROL_START_LSB) & MBOX0_DMA_RX_CONTROL_START_MASK)
#define MBOX0_DMA_RX_CONTROL_STOP_MSB            0
#define MBOX0_DMA_RX_CONTROL_STOP_LSB            0
#define MBOX0_DMA_RX_CONTROL_STOP_MASK           0x00000001
#define MBOX0_DMA_RX_CONTROL_STOP_GET(x)         (((x) & MBOX0_DMA_RX_CONTROL_STOP_MASK) >> MBOX0_DMA_RX_CONTROL_STOP_LSB)
#define MBOX0_DMA_RX_CONTROL_STOP_SET(x)         (((x) << MBOX0_DMA_RX_CONTROL_STOP_LSB) & MBOX0_DMA_RX_CONTROL_STOP_MASK)

#define MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS     0x0c014020
#define MBOX0_DMA_TX_DESCRIPTOR_BASE_OFFSET      0x00000020
#define MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX0_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX0_DMA_TX_CONTROL_ADDRESS             0x0c014024
#define MBOX0_DMA_TX_CONTROL_OFFSET              0x00000024
#define MBOX0_DMA_TX_CONTROL_RESUME_MSB          2
#define MBOX0_DMA_TX_CONTROL_RESUME_LSB          2
#define MBOX0_DMA_TX_CONTROL_RESUME_MASK         0x00000004
#define MBOX0_DMA_TX_CONTROL_RESUME_GET(x)       (((x) & MBOX0_DMA_TX_CONTROL_RESUME_MASK) >> MBOX0_DMA_TX_CONTROL_RESUME_LSB)
#define MBOX0_DMA_TX_CONTROL_RESUME_SET(x)       (((x) << MBOX0_DMA_TX_CONTROL_RESUME_LSB) & MBOX0_DMA_TX_CONTROL_RESUME_MASK)
#define MBOX0_DMA_TX_CONTROL_START_MSB           1
#define MBOX0_DMA_TX_CONTROL_START_LSB           1
#define MBOX0_DMA_TX_CONTROL_START_MASK          0x00000002
#define MBOX0_DMA_TX_CONTROL_START_GET(x)        (((x) & MBOX0_DMA_TX_CONTROL_START_MASK) >> MBOX0_DMA_TX_CONTROL_START_LSB)
#define MBOX0_DMA_TX_CONTROL_START_SET(x)        (((x) << MBOX0_DMA_TX_CONTROL_START_LSB) & MBOX0_DMA_TX_CONTROL_START_MASK)
#define MBOX0_DMA_TX_CONTROL_STOP_MSB            0
#define MBOX0_DMA_TX_CONTROL_STOP_LSB            0
#define MBOX0_DMA_TX_CONTROL_STOP_MASK           0x00000001
#define MBOX0_DMA_TX_CONTROL_STOP_GET(x)         (((x) & MBOX0_DMA_TX_CONTROL_STOP_MASK) >> MBOX0_DMA_TX_CONTROL_STOP_LSB)
#define MBOX0_DMA_TX_CONTROL_STOP_SET(x)         (((x) << MBOX0_DMA_TX_CONTROL_STOP_LSB) & MBOX0_DMA_TX_CONTROL_STOP_MASK)

#define MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS     0x0c014028
#define MBOX1_DMA_RX_DESCRIPTOR_BASE_OFFSET      0x00000028
#define MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX1_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX1_DMA_RX_CONTROL_ADDRESS             0x0c01402c
#define MBOX1_DMA_RX_CONTROL_OFFSET              0x0000002c
#define MBOX1_DMA_RX_CONTROL_RESUME_MSB          2
#define MBOX1_DMA_RX_CONTROL_RESUME_LSB          2
#define MBOX1_DMA_RX_CONTROL_RESUME_MASK         0x00000004
#define MBOX1_DMA_RX_CONTROL_RESUME_GET(x)       (((x) & MBOX1_DMA_RX_CONTROL_RESUME_MASK) >> MBOX1_DMA_RX_CONTROL_RESUME_LSB)
#define MBOX1_DMA_RX_CONTROL_RESUME_SET(x)       (((x) << MBOX1_DMA_RX_CONTROL_RESUME_LSB) & MBOX1_DMA_RX_CONTROL_RESUME_MASK)
#define MBOX1_DMA_RX_CONTROL_START_MSB           1
#define MBOX1_DMA_RX_CONTROL_START_LSB           1
#define MBOX1_DMA_RX_CONTROL_START_MASK          0x00000002
#define MBOX1_DMA_RX_CONTROL_START_GET(x)        (((x) & MBOX1_DMA_RX_CONTROL_START_MASK) >> MBOX1_DMA_RX_CONTROL_START_LSB)
#define MBOX1_DMA_RX_CONTROL_START_SET(x)        (((x) << MBOX1_DMA_RX_CONTROL_START_LSB) & MBOX1_DMA_RX_CONTROL_START_MASK)
#define MBOX1_DMA_RX_CONTROL_STOP_MSB            0
#define MBOX1_DMA_RX_CONTROL_STOP_LSB            0
#define MBOX1_DMA_RX_CONTROL_STOP_MASK           0x00000001
#define MBOX1_DMA_RX_CONTROL_STOP_GET(x)         (((x) & MBOX1_DMA_RX_CONTROL_STOP_MASK) >> MBOX1_DMA_RX_CONTROL_STOP_LSB)
#define MBOX1_DMA_RX_CONTROL_STOP_SET(x)         (((x) << MBOX1_DMA_RX_CONTROL_STOP_LSB) & MBOX1_DMA_RX_CONTROL_STOP_MASK)

#define MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS     0x0c014030
#define MBOX1_DMA_TX_DESCRIPTOR_BASE_OFFSET      0x00000030
#define MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX1_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX1_DMA_TX_CONTROL_ADDRESS             0x0c014034
#define MBOX1_DMA_TX_CONTROL_OFFSET              0x00000034
#define MBOX1_DMA_TX_CONTROL_RESUME_MSB          2
#define MBOX1_DMA_TX_CONTROL_RESUME_LSB          2
#define MBOX1_DMA_TX_CONTROL_RESUME_MASK         0x00000004
#define MBOX1_DMA_TX_CONTROL_RESUME_GET(x)       (((x) & MBOX1_DMA_TX_CONTROL_RESUME_MASK) >> MBOX1_DMA_TX_CONTROL_RESUME_LSB)
#define MBOX1_DMA_TX_CONTROL_RESUME_SET(x)       (((x) << MBOX1_DMA_TX_CONTROL_RESUME_LSB) & MBOX1_DMA_TX_CONTROL_RESUME_MASK)
#define MBOX1_DMA_TX_CONTROL_START_MSB           1
#define MBOX1_DMA_TX_CONTROL_START_LSB           1
#define MBOX1_DMA_TX_CONTROL_START_MASK          0x00000002
#define MBOX1_DMA_TX_CONTROL_START_GET(x)        (((x) & MBOX1_DMA_TX_CONTROL_START_MASK) >> MBOX1_DMA_TX_CONTROL_START_LSB)
#define MBOX1_DMA_TX_CONTROL_START_SET(x)        (((x) << MBOX1_DMA_TX_CONTROL_START_LSB) & MBOX1_DMA_TX_CONTROL_START_MASK)
#define MBOX1_DMA_TX_CONTROL_STOP_MSB            0
#define MBOX1_DMA_TX_CONTROL_STOP_LSB            0
#define MBOX1_DMA_TX_CONTROL_STOP_MASK           0x00000001
#define MBOX1_DMA_TX_CONTROL_STOP_GET(x)         (((x) & MBOX1_DMA_TX_CONTROL_STOP_MASK) >> MBOX1_DMA_TX_CONTROL_STOP_LSB)
#define MBOX1_DMA_TX_CONTROL_STOP_SET(x)         (((x) << MBOX1_DMA_TX_CONTROL_STOP_LSB) & MBOX1_DMA_TX_CONTROL_STOP_MASK)

#define MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS     0x0c014038
#define MBOX2_DMA_RX_DESCRIPTOR_BASE_OFFSET      0x00000038
#define MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX2_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX2_DMA_RX_CONTROL_ADDRESS             0x0c01403c
#define MBOX2_DMA_RX_CONTROL_OFFSET              0x0000003c
#define MBOX2_DMA_RX_CONTROL_RESUME_MSB          2
#define MBOX2_DMA_RX_CONTROL_RESUME_LSB          2
#define MBOX2_DMA_RX_CONTROL_RESUME_MASK         0x00000004
#define MBOX2_DMA_RX_CONTROL_RESUME_GET(x)       (((x) & MBOX2_DMA_RX_CONTROL_RESUME_MASK) >> MBOX2_DMA_RX_CONTROL_RESUME_LSB)
#define MBOX2_DMA_RX_CONTROL_RESUME_SET(x)       (((x) << MBOX2_DMA_RX_CONTROL_RESUME_LSB) & MBOX2_DMA_RX_CONTROL_RESUME_MASK)
#define MBOX2_DMA_RX_CONTROL_START_MSB           1
#define MBOX2_DMA_RX_CONTROL_START_LSB           1
#define MBOX2_DMA_RX_CONTROL_START_MASK          0x00000002
#define MBOX2_DMA_RX_CONTROL_START_GET(x)        (((x) & MBOX2_DMA_RX_CONTROL_START_MASK) >> MBOX2_DMA_RX_CONTROL_START_LSB)
#define MBOX2_DMA_RX_CONTROL_START_SET(x)        (((x) << MBOX2_DMA_RX_CONTROL_START_LSB) & MBOX2_DMA_RX_CONTROL_START_MASK)
#define MBOX2_DMA_RX_CONTROL_STOP_MSB            0
#define MBOX2_DMA_RX_CONTROL_STOP_LSB            0
#define MBOX2_DMA_RX_CONTROL_STOP_MASK           0x00000001
#define MBOX2_DMA_RX_CONTROL_STOP_GET(x)         (((x) & MBOX2_DMA_RX_CONTROL_STOP_MASK) >> MBOX2_DMA_RX_CONTROL_STOP_LSB)
#define MBOX2_DMA_RX_CONTROL_STOP_SET(x)         (((x) << MBOX2_DMA_RX_CONTROL_STOP_LSB) & MBOX2_DMA_RX_CONTROL_STOP_MASK)

#define MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS     0x0c014040
#define MBOX2_DMA_TX_DESCRIPTOR_BASE_OFFSET      0x00000040
#define MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX2_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX2_DMA_TX_CONTROL_ADDRESS             0x0c014044
#define MBOX2_DMA_TX_CONTROL_OFFSET              0x00000044
#define MBOX2_DMA_TX_CONTROL_RESUME_MSB          2
#define MBOX2_DMA_TX_CONTROL_RESUME_LSB          2
#define MBOX2_DMA_TX_CONTROL_RESUME_MASK         0x00000004
#define MBOX2_DMA_TX_CONTROL_RESUME_GET(x)       (((x) & MBOX2_DMA_TX_CONTROL_RESUME_MASK) >> MBOX2_DMA_TX_CONTROL_RESUME_LSB)
#define MBOX2_DMA_TX_CONTROL_RESUME_SET(x)       (((x) << MBOX2_DMA_TX_CONTROL_RESUME_LSB) & MBOX2_DMA_TX_CONTROL_RESUME_MASK)
#define MBOX2_DMA_TX_CONTROL_START_MSB           1
#define MBOX2_DMA_TX_CONTROL_START_LSB           1
#define MBOX2_DMA_TX_CONTROL_START_MASK          0x00000002
#define MBOX2_DMA_TX_CONTROL_START_GET(x)        (((x) & MBOX2_DMA_TX_CONTROL_START_MASK) >> MBOX2_DMA_TX_CONTROL_START_LSB)
#define MBOX2_DMA_TX_CONTROL_START_SET(x)        (((x) << MBOX2_DMA_TX_CONTROL_START_LSB) & MBOX2_DMA_TX_CONTROL_START_MASK)
#define MBOX2_DMA_TX_CONTROL_STOP_MSB            0
#define MBOX2_DMA_TX_CONTROL_STOP_LSB            0
#define MBOX2_DMA_TX_CONTROL_STOP_MASK           0x00000001
#define MBOX2_DMA_TX_CONTROL_STOP_GET(x)         (((x) & MBOX2_DMA_TX_CONTROL_STOP_MASK) >> MBOX2_DMA_TX_CONTROL_STOP_LSB)
#define MBOX2_DMA_TX_CONTROL_STOP_SET(x)         (((x) << MBOX2_DMA_TX_CONTROL_STOP_LSB) & MBOX2_DMA_TX_CONTROL_STOP_MASK)

#define MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS     0x0c014048
#define MBOX3_DMA_RX_DESCRIPTOR_BASE_OFFSET      0x00000048
#define MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX3_DMA_RX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX3_DMA_RX_CONTROL_ADDRESS             0x0c01404c
#define MBOX3_DMA_RX_CONTROL_OFFSET              0x0000004c
#define MBOX3_DMA_RX_CONTROL_RESUME_MSB          2
#define MBOX3_DMA_RX_CONTROL_RESUME_LSB          2
#define MBOX3_DMA_RX_CONTROL_RESUME_MASK         0x00000004
#define MBOX3_DMA_RX_CONTROL_RESUME_GET(x)       (((x) & MBOX3_DMA_RX_CONTROL_RESUME_MASK) >> MBOX3_DMA_RX_CONTROL_RESUME_LSB)
#define MBOX3_DMA_RX_CONTROL_RESUME_SET(x)       (((x) << MBOX3_DMA_RX_CONTROL_RESUME_LSB) & MBOX3_DMA_RX_CONTROL_RESUME_MASK)
#define MBOX3_DMA_RX_CONTROL_START_MSB           1
#define MBOX3_DMA_RX_CONTROL_START_LSB           1
#define MBOX3_DMA_RX_CONTROL_START_MASK          0x00000002
#define MBOX3_DMA_RX_CONTROL_START_GET(x)        (((x) & MBOX3_DMA_RX_CONTROL_START_MASK) >> MBOX3_DMA_RX_CONTROL_START_LSB)
#define MBOX3_DMA_RX_CONTROL_START_SET(x)        (((x) << MBOX3_DMA_RX_CONTROL_START_LSB) & MBOX3_DMA_RX_CONTROL_START_MASK)
#define MBOX3_DMA_RX_CONTROL_STOP_MSB            0
#define MBOX3_DMA_RX_CONTROL_STOP_LSB            0
#define MBOX3_DMA_RX_CONTROL_STOP_MASK           0x00000001
#define MBOX3_DMA_RX_CONTROL_STOP_GET(x)         (((x) & MBOX3_DMA_RX_CONTROL_STOP_MASK) >> MBOX3_DMA_RX_CONTROL_STOP_LSB)
#define MBOX3_DMA_RX_CONTROL_STOP_SET(x)         (((x) << MBOX3_DMA_RX_CONTROL_STOP_LSB) & MBOX3_DMA_RX_CONTROL_STOP_MASK)

#define MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS     0x0c014050
#define MBOX3_DMA_TX_DESCRIPTOR_BASE_OFFSET      0x00000050
#define MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MSB 27
#define MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB 2
#define MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK 0x0ffffffc
#define MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_GET(x) (((x) & MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK) >> MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB)
#define MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_SET(x) (((x) << MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_LSB) & MBOX3_DMA_TX_DESCRIPTOR_BASE_ADDRESS_MASK)

#define MBOX3_DMA_TX_CONTROL_ADDRESS             0x0c014054
#define MBOX3_DMA_TX_CONTROL_OFFSET              0x00000054
#define MBOX3_DMA_TX_CONTROL_RESUME_MSB          2
#define MBOX3_DMA_TX_CONTROL_RESUME_LSB          2
#define MBOX3_DMA_TX_CONTROL_RESUME_MASK         0x00000004
#define MBOX3_DMA_TX_CONTROL_RESUME_GET(x)       (((x) & MBOX3_DMA_TX_CONTROL_RESUME_MASK) >> MBOX3_DMA_TX_CONTROL_RESUME_LSB)
#define MBOX3_DMA_TX_CONTROL_RESUME_SET(x)       (((x) << MBOX3_DMA_TX_CONTROL_RESUME_LSB) & MBOX3_DMA_TX_CONTROL_RESUME_MASK)
#define MBOX3_DMA_TX_CONTROL_START_MSB           1
#define MBOX3_DMA_TX_CONTROL_START_LSB           1
#define MBOX3_DMA_TX_CONTROL_START_MASK          0x00000002
#define MBOX3_DMA_TX_CONTROL_START_GET(x)        (((x) & MBOX3_DMA_TX_CONTROL_START_MASK) >> MBOX3_DMA_TX_CONTROL_START_LSB)
#define MBOX3_DMA_TX_CONTROL_START_SET(x)        (((x) << MBOX3_DMA_TX_CONTROL_START_LSB) & MBOX3_DMA_TX_CONTROL_START_MASK)
#define MBOX3_DMA_TX_CONTROL_STOP_MSB            0
#define MBOX3_DMA_TX_CONTROL_STOP_LSB            0
#define MBOX3_DMA_TX_CONTROL_STOP_MASK           0x00000001
#define MBOX3_DMA_TX_CONTROL_STOP_GET(x)         (((x) & MBOX3_DMA_TX_CONTROL_STOP_MASK) >> MBOX3_DMA_TX_CONTROL_STOP_LSB)
#define MBOX3_DMA_TX_CONTROL_STOP_SET(x)         (((x) << MBOX3_DMA_TX_CONTROL_STOP_LSB) & MBOX3_DMA_TX_CONTROL_STOP_MASK)

#define MBOX_INT_STATUS_ADDRESS                  0x0c014058
#define MBOX_INT_STATUS_OFFSET                   0x00000058
#define MBOX_INT_STATUS_RX_DMA_COMPLETE_MSB      31
#define MBOX_INT_STATUS_RX_DMA_COMPLETE_LSB      28
#define MBOX_INT_STATUS_RX_DMA_COMPLETE_MASK     0xf0000000
#define MBOX_INT_STATUS_RX_DMA_COMPLETE_GET(x)   (((x) & MBOX_INT_STATUS_RX_DMA_COMPLETE_MASK) >> MBOX_INT_STATUS_RX_DMA_COMPLETE_LSB)
#define MBOX_INT_STATUS_RX_DMA_COMPLETE_SET(x)   (((x) << MBOX_INT_STATUS_RX_DMA_COMPLETE_LSB) & MBOX_INT_STATUS_RX_DMA_COMPLETE_MASK)
#define MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_MSB  27
#define MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_LSB  24
#define MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_MASK 0x0f000000
#define MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_GET(x) (((x) & MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_MASK) >> MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_LSB)
#define MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_SET(x) (((x) << MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_LSB) & MBOX_INT_STATUS_TX_DMA_EOM_COMPLETE_MASK)
#define MBOX_INT_STATUS_TX_DMA_COMPLETE_MSB      23
#define MBOX_INT_STATUS_TX_DMA_COMPLETE_LSB      20
#define MBOX_INT_STATUS_TX_DMA_COMPLETE_MASK     0x00f00000
#define MBOX_INT_STATUS_TX_DMA_COMPLETE_GET(x)   (((x) & MBOX_INT_STATUS_TX_DMA_COMPLETE_MASK) >> MBOX_INT_STATUS_TX_DMA_COMPLETE_LSB)
#define MBOX_INT_STATUS_TX_DMA_COMPLETE_SET(x)   (((x) << MBOX_INT_STATUS_TX_DMA_COMPLETE_LSB) & MBOX_INT_STATUS_TX_DMA_COMPLETE_MASK)
#define MBOX_INT_STATUS_TX_OVERFLOW_MSB          17
#define MBOX_INT_STATUS_TX_OVERFLOW_LSB          17
#define MBOX_INT_STATUS_TX_OVERFLOW_MASK         0x00020000
#define MBOX_INT_STATUS_TX_OVERFLOW_GET(x)       (((x) & MBOX_INT_STATUS_TX_OVERFLOW_MASK) >> MBOX_INT_STATUS_TX_OVERFLOW_LSB)
#define MBOX_INT_STATUS_TX_OVERFLOW_SET(x)       (((x) << MBOX_INT_STATUS_TX_OVERFLOW_LSB) & MBOX_INT_STATUS_TX_OVERFLOW_MASK)
#define MBOX_INT_STATUS_RX_UNDERFLOW_MSB         16
#define MBOX_INT_STATUS_RX_UNDERFLOW_LSB         16
#define MBOX_INT_STATUS_RX_UNDERFLOW_MASK        0x00010000
#define MBOX_INT_STATUS_RX_UNDERFLOW_GET(x)      (((x) & MBOX_INT_STATUS_RX_UNDERFLOW_MASK) >> MBOX_INT_STATUS_RX_UNDERFLOW_LSB)
#define MBOX_INT_STATUS_RX_UNDERFLOW_SET(x)      (((x) << MBOX_INT_STATUS_RX_UNDERFLOW_LSB) & MBOX_INT_STATUS_RX_UNDERFLOW_MASK)
#define MBOX_INT_STATUS_TX_NOT_EMPTY_MSB         15
#define MBOX_INT_STATUS_TX_NOT_EMPTY_LSB         12
#define MBOX_INT_STATUS_TX_NOT_EMPTY_MASK        0x0000f000
#define MBOX_INT_STATUS_TX_NOT_EMPTY_GET(x)      (((x) & MBOX_INT_STATUS_TX_NOT_EMPTY_MASK) >> MBOX_INT_STATUS_TX_NOT_EMPTY_LSB)
#define MBOX_INT_STATUS_TX_NOT_EMPTY_SET(x)      (((x) << MBOX_INT_STATUS_TX_NOT_EMPTY_LSB) & MBOX_INT_STATUS_TX_NOT_EMPTY_MASK)
#define MBOX_INT_STATUS_RX_NOT_FULL_MSB          11
#define MBOX_INT_STATUS_RX_NOT_FULL_LSB          8
#define MBOX_INT_STATUS_RX_NOT_FULL_MASK         0x00000f00
#define MBOX_INT_STATUS_RX_NOT_FULL_GET(x)       (((x) & MBOX_INT_STATUS_RX_NOT_FULL_MASK) >> MBOX_INT_STATUS_RX_NOT_FULL_LSB)
#define MBOX_INT_STATUS_RX_NOT_FULL_SET(x)       (((x) << MBOX_INT_STATUS_RX_NOT_FULL_LSB) & MBOX_INT_STATUS_RX_NOT_FULL_MASK)
#define MBOX_INT_STATUS_HOST_MSB                 7
#define MBOX_INT_STATUS_HOST_LSB                 0
#define MBOX_INT_STATUS_HOST_MASK                0x000000ff
#define MBOX_INT_STATUS_HOST_GET(x)              (((x) & MBOX_INT_STATUS_HOST_MASK) >> MBOX_INT_STATUS_HOST_LSB)
#define MBOX_INT_STATUS_HOST_SET(x)              (((x) << MBOX_INT_STATUS_HOST_LSB) & MBOX_INT_STATUS_HOST_MASK)

#define MBOX_INT_ENABLE_ADDRESS                  0x0c01405c
#define MBOX_INT_ENABLE_OFFSET                   0x0000005c
#define MBOX_INT_ENABLE_RX_DMA_COMPLETE_MSB      31
#define MBOX_INT_ENABLE_RX_DMA_COMPLETE_LSB      28
#define MBOX_INT_ENABLE_RX_DMA_COMPLETE_MASK     0xf0000000
#define MBOX_INT_ENABLE_RX_DMA_COMPLETE_GET(x)   (((x) & MBOX_INT_ENABLE_RX_DMA_COMPLETE_MASK) >> MBOX_INT_ENABLE_RX_DMA_COMPLETE_LSB)
#define MBOX_INT_ENABLE_RX_DMA_COMPLETE_SET(x)   (((x) << MBOX_INT_ENABLE_RX_DMA_COMPLETE_LSB) & MBOX_INT_ENABLE_RX_DMA_COMPLETE_MASK)
#define MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_MSB  27
#define MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_LSB  24
#define MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_MASK 0x0f000000
#define MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_GET(x) (((x) & MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_MASK) >> MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_LSB)
#define MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_SET(x) (((x) << MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_LSB) & MBOX_INT_ENABLE_TX_DMA_EOM_COMPLETE_MASK)
#define MBOX_INT_ENABLE_TX_DMA_COMPLETE_MSB      23
#define MBOX_INT_ENABLE_TX_DMA_COMPLETE_LSB      20
#define MBOX_INT_ENABLE_TX_DMA_COMPLETE_MASK     0x00f00000
#define MBOX_INT_ENABLE_TX_DMA_COMPLETE_GET(x)   (((x) & MBOX_INT_ENABLE_TX_DMA_COMPLETE_MASK) >> MBOX_INT_ENABLE_TX_DMA_COMPLETE_LSB)
#define MBOX_INT_ENABLE_TX_DMA_COMPLETE_SET(x)   (((x) << MBOX_INT_ENABLE_TX_DMA_COMPLETE_LSB) & MBOX_INT_ENABLE_TX_DMA_COMPLETE_MASK)
#define MBOX_INT_ENABLE_TX_OVERFLOW_MSB          17
#define MBOX_INT_ENABLE_TX_OVERFLOW_LSB          17
#define MBOX_INT_ENABLE_TX_OVERFLOW_MASK         0x00020000
#define MBOX_INT_ENABLE_TX_OVERFLOW_GET(x)       (((x) & MBOX_INT_ENABLE_TX_OVERFLOW_MASK) >> MBOX_INT_ENABLE_TX_OVERFLOW_LSB)
#define MBOX_INT_ENABLE_TX_OVERFLOW_SET(x)       (((x) << MBOX_INT_ENABLE_TX_OVERFLOW_LSB) & MBOX_INT_ENABLE_TX_OVERFLOW_MASK)
#define MBOX_INT_ENABLE_RX_UNDERFLOW_MSB         16
#define MBOX_INT_ENABLE_RX_UNDERFLOW_LSB         16
#define MBOX_INT_ENABLE_RX_UNDERFLOW_MASK        0x00010000
#define MBOX_INT_ENABLE_RX_UNDERFLOW_GET(x)      (((x) & MBOX_INT_ENABLE_RX_UNDERFLOW_MASK) >> MBOX_INT_ENABLE_RX_UNDERFLOW_LSB)
#define MBOX_INT_ENABLE_RX_UNDERFLOW_SET(x)      (((x) << MBOX_INT_ENABLE_RX_UNDERFLOW_LSB) & MBOX_INT_ENABLE_RX_UNDERFLOW_MASK)
#define MBOX_INT_ENABLE_TX_NOT_EMPTY_MSB         15
#define MBOX_INT_ENABLE_TX_NOT_EMPTY_LSB         12
#define MBOX_INT_ENABLE_TX_NOT_EMPTY_MASK        0x0000f000
#define MBOX_INT_ENABLE_TX_NOT_EMPTY_GET(x)      (((x) & MBOX_INT_ENABLE_TX_NOT_EMPTY_MASK) >> MBOX_INT_ENABLE_TX_NOT_EMPTY_LSB)
#define MBOX_INT_ENABLE_TX_NOT_EMPTY_SET(x)      (((x) << MBOX_INT_ENABLE_TX_NOT_EMPTY_LSB) & MBOX_INT_ENABLE_TX_NOT_EMPTY_MASK)
#define MBOX_INT_ENABLE_RX_NOT_FULL_MSB          11
#define MBOX_INT_ENABLE_RX_NOT_FULL_LSB          8
#define MBOX_INT_ENABLE_RX_NOT_FULL_MASK         0x00000f00
#define MBOX_INT_ENABLE_RX_NOT_FULL_GET(x)       (((x) & MBOX_INT_ENABLE_RX_NOT_FULL_MASK) >> MBOX_INT_ENABLE_RX_NOT_FULL_LSB)
#define MBOX_INT_ENABLE_RX_NOT_FULL_SET(x)       (((x) << MBOX_INT_ENABLE_RX_NOT_FULL_LSB) & MBOX_INT_ENABLE_RX_NOT_FULL_MASK)
#define MBOX_INT_ENABLE_HOST_MSB                 7
#define MBOX_INT_ENABLE_HOST_LSB                 0
#define MBOX_INT_ENABLE_HOST_MASK                0x000000ff
#define MBOX_INT_ENABLE_HOST_GET(x)              (((x) & MBOX_INT_ENABLE_HOST_MASK) >> MBOX_INT_ENABLE_HOST_LSB)
#define MBOX_INT_ENABLE_HOST_SET(x)              (((x) << MBOX_INT_ENABLE_HOST_LSB) & MBOX_INT_ENABLE_HOST_MASK)

#define INT_HOST_ADDRESS                         0x0c014060
#define INT_HOST_OFFSET                          0x00000060
#define INT_HOST_VECTOR_MSB                      7
#define INT_HOST_VECTOR_LSB                      0
#define INT_HOST_VECTOR_MASK                     0x000000ff
#define INT_HOST_VECTOR_GET(x)                   (((x) & INT_HOST_VECTOR_MASK) >> INT_HOST_VECTOR_LSB)
#define INT_HOST_VECTOR_SET(x)                   (((x) << INT_HOST_VECTOR_LSB) & INT_HOST_VECTOR_MASK)

#define LOCAL_COUNT_ADDRESS                      0x0c014080
#define LOCAL_COUNT_OFFSET                       0x00000080
#define LOCAL_COUNT_VALUE_MSB                    7
#define LOCAL_COUNT_VALUE_LSB                    0
#define LOCAL_COUNT_VALUE_MASK                   0x000000ff
#define LOCAL_COUNT_VALUE_GET(x)                 (((x) & LOCAL_COUNT_VALUE_MASK) >> LOCAL_COUNT_VALUE_LSB)
#define LOCAL_COUNT_VALUE_SET(x)                 (((x) << LOCAL_COUNT_VALUE_LSB) & LOCAL_COUNT_VALUE_MASK)

#define COUNT_INC_ADDRESS                        0x0c0140a0
#define COUNT_INC_OFFSET                         0x000000a0
#define COUNT_INC_VALUE_MSB                      7
#define COUNT_INC_VALUE_LSB                      0
#define COUNT_INC_VALUE_MASK                     0x000000ff
#define COUNT_INC_VALUE_GET(x)                   (((x) & COUNT_INC_VALUE_MASK) >> COUNT_INC_VALUE_LSB)
#define COUNT_INC_VALUE_SET(x)                   (((x) << COUNT_INC_VALUE_LSB) & COUNT_INC_VALUE_MASK)

#define LOCAL_SCRATCH_ADDRESS                    0x0c0140c0
#define LOCAL_SCRATCH_OFFSET                     0x000000c0
#define LOCAL_SCRATCH_VALUE_MSB                  7
#define LOCAL_SCRATCH_VALUE_LSB                  0
#define LOCAL_SCRATCH_VALUE_MASK                 0x000000ff
#define LOCAL_SCRATCH_VALUE_GET(x)               (((x) & LOCAL_SCRATCH_VALUE_MASK) >> LOCAL_SCRATCH_VALUE_LSB)
#define LOCAL_SCRATCH_VALUE_SET(x)               (((x) << LOCAL_SCRATCH_VALUE_LSB) & LOCAL_SCRATCH_VALUE_MASK)

#define USE_LOCAL_BUS_ADDRESS                    0x0c0140e0
#define USE_LOCAL_BUS_OFFSET                     0x000000e0
#define USE_LOCAL_BUS_PIN_INIT_MSB               0
#define USE_LOCAL_BUS_PIN_INIT_LSB               0
#define USE_LOCAL_BUS_PIN_INIT_MASK              0x00000001
#define USE_LOCAL_BUS_PIN_INIT_GET(x)            (((x) & USE_LOCAL_BUS_PIN_INIT_MASK) >> USE_LOCAL_BUS_PIN_INIT_LSB)
#define USE_LOCAL_BUS_PIN_INIT_SET(x)            (((x) << USE_LOCAL_BUS_PIN_INIT_LSB) & USE_LOCAL_BUS_PIN_INIT_MASK)

#define SDIO_CONFIG_ADDRESS                      0x0c0140e4
#define SDIO_CONFIG_OFFSET                       0x000000e4
#define SDIO_CONFIG_CCCR_IOR1_MSB                0
#define SDIO_CONFIG_CCCR_IOR1_LSB                0
#define SDIO_CONFIG_CCCR_IOR1_MASK               0x00000001
#define SDIO_CONFIG_CCCR_IOR1_GET(x)             (((x) & SDIO_CONFIG_CCCR_IOR1_MASK) >> SDIO_CONFIG_CCCR_IOR1_LSB)
#define SDIO_CONFIG_CCCR_IOR1_SET(x)             (((x) << SDIO_CONFIG_CCCR_IOR1_LSB) & SDIO_CONFIG_CCCR_IOR1_MASK)

#define MBOX_DEBUG_ADDRESS                       0x0c0140e8
#define MBOX_DEBUG_OFFSET                        0x000000e8
#define MBOX_DEBUG_SEL_MSB                       2
#define MBOX_DEBUG_SEL_LSB                       0
#define MBOX_DEBUG_SEL_MASK                      0x00000007
#define MBOX_DEBUG_SEL_GET(x)                    (((x) & MBOX_DEBUG_SEL_MASK) >> MBOX_DEBUG_SEL_LSB)
#define MBOX_DEBUG_SEL_SET(x)                    (((x) << MBOX_DEBUG_SEL_LSB) & MBOX_DEBUG_SEL_MASK)

#define MBOX_FIFO_RESET_ADDRESS                  0x0c0140ec
#define MBOX_FIFO_RESET_OFFSET                   0x000000ec
#define MBOX_FIFO_RESET_INIT_MSB                 0
#define MBOX_FIFO_RESET_INIT_LSB                 0
#define MBOX_FIFO_RESET_INIT_MASK                0x00000001
#define MBOX_FIFO_RESET_INIT_GET(x)              (((x) & MBOX_FIFO_RESET_INIT_MASK) >> MBOX_FIFO_RESET_INIT_LSB)
#define MBOX_FIFO_RESET_INIT_SET(x)              (((x) << MBOX_FIFO_RESET_INIT_LSB) & MBOX_FIFO_RESET_INIT_MASK)

#define STEREO_CONFIG_ADDRESS                    0x0c0140f0
#define STEREO_CONFIG_OFFSET                     0x000000f0
#define STEREO_CONFIG_ENABLE_MSB                 24
#define STEREO_CONFIG_ENABLE_LSB                 24
#define STEREO_CONFIG_ENABLE_MASK                0x01000000
#define STEREO_CONFIG_ENABLE_GET(x)              (((x) & STEREO_CONFIG_ENABLE_MASK) >> STEREO_CONFIG_ENABLE_LSB)
#define STEREO_CONFIG_ENABLE_SET(x)              (((x) << STEREO_CONFIG_ENABLE_LSB) & STEREO_CONFIG_ENABLE_MASK)
#define STEREO_CONFIG_RESET_MSB                  23
#define STEREO_CONFIG_RESET_LSB                  23
#define STEREO_CONFIG_RESET_MASK                 0x00800000
#define STEREO_CONFIG_RESET_GET(x)               (((x) & STEREO_CONFIG_RESET_MASK) >> STEREO_CONFIG_RESET_LSB)
#define STEREO_CONFIG_RESET_SET(x)               (((x) << STEREO_CONFIG_RESET_LSB) & STEREO_CONFIG_RESET_MASK)
#define STEREO_CONFIG_I2S_DELAY_MSB              22
#define STEREO_CONFIG_I2S_DELAY_LSB              22
#define STEREO_CONFIG_I2S_DELAY_MASK             0x00400000
#define STEREO_CONFIG_I2S_DELAY_GET(x)           (((x) & STEREO_CONFIG_I2S_DELAY_MASK) >> STEREO_CONFIG_I2S_DELAY_LSB)
#define STEREO_CONFIG_I2S_DELAY_SET(x)           (((x) << STEREO_CONFIG_I2S_DELAY_LSB) & STEREO_CONFIG_I2S_DELAY_MASK)
#define STEREO_CONFIG_MIC_MASTER_MSB             21
#define STEREO_CONFIG_MIC_MASTER_LSB             21
#define STEREO_CONFIG_MIC_MASTER_MASK            0x00200000
#define STEREO_CONFIG_MIC_MASTER_GET(x)          (((x) & STEREO_CONFIG_MIC_MASTER_MASK) >> STEREO_CONFIG_MIC_MASTER_LSB)
#define STEREO_CONFIG_MIC_MASTER_SET(x)          (((x) << STEREO_CONFIG_MIC_MASTER_LSB) & STEREO_CONFIG_MIC_MASTER_MASK)
#define STEREO_CONFIG_MIC_WORD_SIZE_MSB          20
#define STEREO_CONFIG_MIC_WORD_SIZE_LSB          20
#define STEREO_CONFIG_MIC_WORD_SIZE_MASK         0x00100000
#define STEREO_CONFIG_MIC_WORD_SIZE_GET(x)       (((x) & STEREO_CONFIG_MIC_WORD_SIZE_MASK) >> STEREO_CONFIG_MIC_WORD_SIZE_LSB)
#define STEREO_CONFIG_MIC_WORD_SIZE_SET(x)       (((x) << STEREO_CONFIG_MIC_WORD_SIZE_LSB) & STEREO_CONFIG_MIC_WORD_SIZE_MASK)
#define STEREO_CONFIG_STEREO_MONO_MSB            19
#define STEREO_CONFIG_STEREO_MONO_LSB            18
#define STEREO_CONFIG_STEREO_MONO_MASK           0x000c0000
#define STEREO_CONFIG_STEREO_MONO_GET(x)         (((x) & STEREO_CONFIG_STEREO_MONO_MASK) >> STEREO_CONFIG_STEREO_MONO_LSB)
#define STEREO_CONFIG_STEREO_MONO_SET(x)         (((x) << STEREO_CONFIG_STEREO_MONO_LSB) & STEREO_CONFIG_STEREO_MONO_MASK)
#define STEREO_CONFIG_DATA_WORD_SIZE_MSB         17
#define STEREO_CONFIG_DATA_WORD_SIZE_LSB         16
#define STEREO_CONFIG_DATA_WORD_SIZE_MASK        0x00030000
#define STEREO_CONFIG_DATA_WORD_SIZE_GET(x)      (((x) & STEREO_CONFIG_DATA_WORD_SIZE_MASK) >> STEREO_CONFIG_DATA_WORD_SIZE_LSB)
#define STEREO_CONFIG_DATA_WORD_SIZE_SET(x)      (((x) << STEREO_CONFIG_DATA_WORD_SIZE_LSB) & STEREO_CONFIG_DATA_WORD_SIZE_MASK)
#define STEREO_CONFIG_I2S_WORD_SIZE_MSB          15
#define STEREO_CONFIG_I2S_WORD_SIZE_LSB          15
#define STEREO_CONFIG_I2S_WORD_SIZE_MASK         0x00008000
#define STEREO_CONFIG_I2S_WORD_SIZE_GET(x)       (((x) & STEREO_CONFIG_I2S_WORD_SIZE_MASK) >> STEREO_CONFIG_I2S_WORD_SIZE_LSB)
#define STEREO_CONFIG_I2S_WORD_SIZE_SET(x)       (((x) << STEREO_CONFIG_I2S_WORD_SIZE_LSB) & STEREO_CONFIG_I2S_WORD_SIZE_MASK)
#define STEREO_CONFIG_MCK_SEL_MSB                14
#define STEREO_CONFIG_MCK_SEL_LSB                14
#define STEREO_CONFIG_MCK_SEL_MASK               0x00004000
#define STEREO_CONFIG_MCK_SEL_GET(x)             (((x) & STEREO_CONFIG_MCK_SEL_MASK) >> STEREO_CONFIG_MCK_SEL_LSB)
#define STEREO_CONFIG_MCK_SEL_SET(x)             (((x) << STEREO_CONFIG_MCK_SEL_LSB) & STEREO_CONFIG_MCK_SEL_MASK)
#define STEREO_CONFIG_MCK_CNT_MSB                13
#define STEREO_CONFIG_MCK_CNT_LSB                10
#define STEREO_CONFIG_MCK_CNT_MASK               0x00003c00
#define STEREO_CONFIG_MCK_CNT_GET(x)             (((x) & STEREO_CONFIG_MCK_CNT_MASK) >> STEREO_CONFIG_MCK_CNT_LSB)
#define STEREO_CONFIG_MCK_CNT_SET(x)             (((x) << STEREO_CONFIG_MCK_CNT_LSB) & STEREO_CONFIG_MCK_CNT_MASK)
#define STEREO_CONFIG_MCK_RAW_MSB                9
#define STEREO_CONFIG_MCK_RAW_LSB                9
#define STEREO_CONFIG_MCK_RAW_MASK               0x00000200
#define STEREO_CONFIG_MCK_RAW_GET(x)             (((x) & STEREO_CONFIG_MCK_RAW_MASK) >> STEREO_CONFIG_MCK_RAW_LSB)
#define STEREO_CONFIG_MCK_RAW_SET(x)             (((x) << STEREO_CONFIG_MCK_RAW_LSB) & STEREO_CONFIG_MCK_RAW_MASK)
#define STEREO_CONFIG_MASTER_MSB                 8
#define STEREO_CONFIG_MASTER_LSB                 8
#define STEREO_CONFIG_MASTER_MASK                0x00000100
#define STEREO_CONFIG_MASTER_GET(x)              (((x) & STEREO_CONFIG_MASTER_MASK) >> STEREO_CONFIG_MASTER_LSB)
#define STEREO_CONFIG_MASTER_SET(x)              (((x) << STEREO_CONFIG_MASTER_LSB) & STEREO_CONFIG_MASTER_MASK)
#define STEREO_CONFIG_POSEDGE_MSB                7
#define STEREO_CONFIG_POSEDGE_LSB                0
#define STEREO_CONFIG_POSEDGE_MASK               0x000000ff
#define STEREO_CONFIG_POSEDGE_GET(x)             (((x) & STEREO_CONFIG_POSEDGE_MASK) >> STEREO_CONFIG_POSEDGE_LSB)
#define STEREO_CONFIG_POSEDGE_SET(x)             (((x) << STEREO_CONFIG_POSEDGE_LSB) & STEREO_CONFIG_POSEDGE_MASK)

#define STEREO_VOLUME_ADDRESS                    0x0c0140f4
#define STEREO_VOLUME_OFFSET                     0x000000f4
#define STEREO_VOLUME_CHANNEL1_MSB               12
#define STEREO_VOLUME_CHANNEL1_LSB               8
#define STEREO_VOLUME_CHANNEL1_MASK              0x00001f00
#define STEREO_VOLUME_CHANNEL1_GET(x)            (((x) & STEREO_VOLUME_CHANNEL1_MASK) >> STEREO_VOLUME_CHANNEL1_LSB)
#define STEREO_VOLUME_CHANNEL1_SET(x)            (((x) << STEREO_VOLUME_CHANNEL1_LSB) & STEREO_VOLUME_CHANNEL1_MASK)
#define STEREO_VOLUME_CHANNEL0_MSB               4
#define STEREO_VOLUME_CHANNEL0_LSB               0
#define STEREO_VOLUME_CHANNEL0_MASK              0x0000001f
#define STEREO_VOLUME_CHANNEL0_GET(x)            (((x) & STEREO_VOLUME_CHANNEL0_MASK) >> STEREO_VOLUME_CHANNEL0_LSB)
#define STEREO_VOLUME_CHANNEL0_SET(x)            (((x) << STEREO_VOLUME_CHANNEL0_LSB) & STEREO_VOLUME_CHANNEL0_MASK)

#define HOST_IF_WINDOW_ADDRESS                   0x0c016000
#define HOST_IF_WINDOW_OFFSET                    0x00002000
#define HOST_IF_WINDOW_DATA_MSB                  7
#define HOST_IF_WINDOW_DATA_LSB                  0
#define HOST_IF_WINDOW_DATA_MASK                 0x000000ff
#define HOST_IF_WINDOW_DATA_GET(x)               (((x) & HOST_IF_WINDOW_DATA_MASK) >> HOST_IF_WINDOW_DATA_LSB)
#define HOST_IF_WINDOW_DATA_SET(x)               (((x) << HOST_IF_WINDOW_DATA_LSB) & HOST_IF_WINDOW_DATA_MASK)

#ifndef __ASSEMBLER__
typedef struct mbox_reg_s {
  volatile unsigned int mbox_fifo[4];
  volatile unsigned int mbox_fifo_status;
  volatile unsigned int mbox_dma_policy;
  volatile unsigned int mbox0_dma_rx_descriptor_base;
  volatile unsigned int mbox0_dma_rx_control;
  volatile unsigned int mbox0_dma_tx_descriptor_base;
  volatile unsigned int mbox0_dma_tx_control;
  volatile unsigned int mbox1_dma_rx_descriptor_base;
  volatile unsigned int mbox1_dma_rx_control;
  volatile unsigned int mbox1_dma_tx_descriptor_base;
  volatile unsigned int mbox1_dma_tx_control;
  volatile unsigned int mbox2_dma_rx_descriptor_base;
  volatile unsigned int mbox2_dma_rx_control;
  volatile unsigned int mbox2_dma_tx_descriptor_base;
  volatile unsigned int mbox2_dma_tx_control;
  volatile unsigned int mbox3_dma_rx_descriptor_base;
  volatile unsigned int mbox3_dma_rx_control;
  volatile unsigned int mbox3_dma_tx_descriptor_base;
  volatile unsigned int mbox3_dma_tx_control;
  volatile unsigned int mbox_int_status;
  volatile unsigned int mbox_int_enable;
  volatile unsigned int int_host;
  unsigned char pad0[28]; /* pad to 0x80 */
  volatile unsigned int local_count[8];
  volatile unsigned int count_inc[8];
  volatile unsigned int local_scratch[8];
  volatile unsigned int use_local_bus;
  volatile unsigned int sdio_config;
  volatile unsigned int mbox_debug;
  volatile unsigned int mbox_fifo_reset;
  volatile unsigned int stereo_config;
  volatile unsigned int stereo_volume;
  unsigned char pad1[7944]; /* pad to 0x2000 */
  volatile unsigned int host_if_window[2048];
} mbox_reg_t;
#endif /* __ASSEMBLER__ */

#endif /* _MBOX_H_ */
