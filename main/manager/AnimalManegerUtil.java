package manager;

import java.util.Comparator;
import java.util.List;

import model.AbstractAnimal;
import model.SortType;

public class AnimalManegerUtil {
	private static final DelfunsSorterByFoodConsumedInKilo SORTER_BY_VOLUME_OF_THE_AQUATIUM = new DelfunsSorterByFoodConsumedInKilo();

	public static void sortByFoodConsumedInKiloDelfins(List<AbstractAnimal> animals, SortType sortType) {

		animals.sort(sortType == SortType.ASCENDING ? SORTER_BY_VOLUME_OF_THE_AQUATIUM
				: SORTER_BY_VOLUME_OF_THE_AQUATIUM.reversed());
	}

	static class DelfunsSorterByFoodConsumedInKilo implements Comparator<AbstractAnimal> {

		@Override
		public int compare(AbstractAnimal firstAnimal, AbstractAnimal secondAnimal) {
			return firstAnimal.getByVolumeOfTheAquarium() - secondAnimal.getByVolumeOfTheAquarium();
		}

	}

	public static void sortByPointDelfins(List<AbstractAnimal> animals, SortType sortType) {
		Comparator<AbstractAnimal> comparator = Comparator.comparing(AbstractAnimal::getPoint);
		animals.sort(sortType == SortType.ASCENDING ? comparator : comparator.reversed());
	}

	class SorterByPointDelfins implements Comparator<AbstractAnimal> {

		@Override
		public int compare(AbstractAnimal firstAnimal, AbstractAnimal secondAnimal) {
			return firstAnimal.getPoint().compareTo(secondAnimal.getPoint());
		}
	}

	public static void sortByAgeInYearsDelfins(List<AbstractAnimal> animals, SortType sortType) {
		Comparator<AbstractAnimal> comparator = new Comparator<AbstractAnimal>() {

			@Override
			public int compare(AbstractAnimal firstAnimal, AbstractAnimal secondAnimal) {
				return (int) (firstAnimal.getAgeInYears() - secondAnimal.getAgeInYears());

			}
		};

		if (sortType == SortType.ASCENDING) {
			animals.sort(comparator);
		}

		else {
			animals.sort(comparator.reversed());

		}
	}
}