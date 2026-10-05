#include "bench/fib.hpp"

// RE Benchmark TU 14686 of 20000 (depth=28, stamp="default")
namespace bench_tu_14686 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14686>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14686
