#include "bench/fib.hpp"

// RE Benchmark TU 4242 of 20000 (depth=28, stamp="default")
namespace bench_tu_4242 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4242>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4242
