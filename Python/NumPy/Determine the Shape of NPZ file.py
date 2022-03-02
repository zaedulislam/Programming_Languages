from numpy import load
import numpy as np
import zipfile

customDataset = load('data_2d_custom_myvideos.npz', allow_pickle=True)['positions_2d'].item()
humanDataset = load('data_2d_h36m_detectron_ft_h36m.npz', allow_pickle=True)['positions_2d'].item()


def determineShapeOfNPZFile(datasetName, dataset):
    print("Dataset: ",datasetName)

    for subject, subjectValue in dataset.items():
        # subject -> 'S1', 'S2', etc.
        for action, actionValue in subjectValue.items():
            # action -> 'Directions 1', 'Directions', etc.        
            print(action, end=': ')
            for value in actionValue:
                # print("Type: ", type(value))
                print(value.shape, end=' | ')
                # break
            print('\n')
            # break
        break

findShape('Custom', customDataset)
findShape('Human3.6M', humanDataset)

