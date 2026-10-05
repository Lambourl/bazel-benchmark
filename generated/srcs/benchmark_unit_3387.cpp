#include "bench/fib.hpp"

// RE Benchmark TU 3387 of 20000 (depth=28, stamp="default")
namespace bench_tu_3387 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3387>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3387
