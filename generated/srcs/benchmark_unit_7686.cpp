#include "bench/fib.hpp"

// RE Benchmark TU 7686 of 20000 (depth=28, stamp="default")
namespace bench_tu_7686 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7686>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7686
