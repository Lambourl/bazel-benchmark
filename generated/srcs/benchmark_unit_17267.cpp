#include "bench/fib.hpp"

// RE Benchmark TU 17267 of 20000 (depth=28, stamp="default")
namespace bench_tu_17267 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17267>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17267
