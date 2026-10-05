#include "bench/fib.hpp"

// RE Benchmark TU 4825 of 20000 (depth=28, stamp="default")
namespace bench_tu_4825 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4825>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4825
