package iot.lviv;

import static org.junit.jupiter.api.Assertions.assertEquals;
import java.util.List;

import org.junit.jupiter.api.Test;

import model.AbstractAnimal;
import model.SortType;

public class AnimalsManagerTestUtils extends AbstractSearchAnimalsManager {

	@Test
	public void testSortDescending() {
		AnimalsManagerTestUtils.sortByVolumeOfTheAquarium(delfins, SortType.DESCENDING);
		assertEquals(1, delfins.get(0).getByVolumeOfTheAquarium());
		assertEquals(2, delfins.get(1).getByVolumeOfTheAquarium());
		assertEquals(3, delfins.get(2).getByVolumeOfTheAquarium());
		
	}

	private static void sortByVolumeOfTheAquarium(List<AbstractAnimal> delfins, SortType descending) {
		
	}
}