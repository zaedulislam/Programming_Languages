from numpy import load
import numpy as np


customDataset = load('data_2d_custom_myvideos.npz', allow_pickle=True)['positions_2d'].item()
humanDataset = load('data_2d_h36m_detectron_ft_h36m.npz', allow_pickle=True)['positions_2d'].item()


def determineShapeOfNPZ(datasetName, dataset):
    print("Dataset: ",datasetName)

    for subject, subjectValue in dataset.items():
        # subject -> 'S1', 'S2', etc.
        for action, actionValue in subjectValue.items():
            # action -> 'Directions 1', 'Directions', etc.        
            for value in actionValue:
                print("Type: ", type(value))
                print(value.shape)
                break
            break
        break

findShape('Custom', customDataset)
findShape('Human3.6M', humanDataset)





